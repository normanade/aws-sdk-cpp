﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MTurk
{
namespace Model
{

  /**
   * <p> The QualificationRequest data structure represents a request a Worker has
   * made for a Qualification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequest">AWS
   * API Reference</a></p>
   */
  class QualificationRequest
  {
  public:
    AWS_MTURK_API QualificationRequest();
    AWS_MTURK_API QualificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API QualificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline const Aws::String& GetQualificationRequestId() const{ return m_qualificationRequestId; }
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }
    inline void SetQualificationRequestId(const Aws::String& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = value; }
    inline void SetQualificationRequestId(Aws::String&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::move(value); }
    inline void SetQualificationRequestId(const char* value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId.assign(value); }
    inline QualificationRequest& WithQualificationRequestId(const Aws::String& value) { SetQualificationRequestId(value); return *this;}
    inline QualificationRequest& WithQualificationRequestId(Aws::String&& value) { SetQualificationRequestId(std::move(value)); return *this;}
    inline QualificationRequest& WithQualificationRequestId(const char* value) { SetQualificationRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }
    inline QualificationRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}
    inline QualificationRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}
    inline QualificationRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }
    inline QualificationRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline QualificationRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline QualificationRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }
    inline QualificationRequest& WithTest(const Aws::String& value) { SetTest(value); return *this;}
    inline QualificationRequest& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}
    inline QualificationRequest& WithTest(const char* value) { SetTest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }
    inline void SetAnswer(const Aws::String& value) { m_answerHasBeenSet = true; m_answer = value; }
    inline void SetAnswer(Aws::String&& value) { m_answerHasBeenSet = true; m_answer = std::move(value); }
    inline void SetAnswer(const char* value) { m_answerHasBeenSet = true; m_answer.assign(value); }
    inline QualificationRequest& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}
    inline QualificationRequest& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}
    inline QualificationRequest& WithAnswer(const char* value) { SetAnswer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline QualificationRequest& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline QualificationRequest& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet = false;

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::String m_test;
    bool m_testHasBeenSet = false;

    Aws::String m_answer;
    bool m_answerHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
