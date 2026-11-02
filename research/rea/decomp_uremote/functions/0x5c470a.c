// rea decompile_all
// name: FindHandler
// address: 0x5c470a
// body: available
// range: 0x5c470a-0x5c4a50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  _s_FuncInfo *p_Var1;
  uchar uVar2;
  bool bVar3;
  _ptiddata p_Var4;
  int iVar5;
  _s_TryBlockMapEntry *p_Var6;
  EHRegistrationNode *unaff_EBX;
  _s_FuncInfo *p_Var7;
  int *piVar8;
  int unaff_ESI;
  _s_FuncInfo *p_Var9;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar10;
  bad_exception in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var9 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 != -0x1f928c9d) goto LAB_005c4a0d;
  p_Var7 = (_s_FuncInfo *)0x19930520;
  if (*(int *)(param_1 + 0x10) != 3) goto LAB_005c487a;
  iVar5 = *(int *)(param_1 + 0x14);
  if (((iVar5 != 0x19930520) && (iVar5 != 0x19930521)) && (iVar5 != 0x19930522)) goto LAB_005c487a;
  if (*(int *)(param_1 + 0x1c) != 0) goto LAB_005c487a;
  p_Var4 = __getptd();
  if (p_Var4->_curexception != (void *)0x0) {
    p_Var4 = __getptd();
    param_1 = p_Var4->_curexception;
    p_Var4 = __getptd();
    param_3 = p_Var4->_curcontext;
    iVar5 = _ValidateRead(param_1,1);
    if (iVar5 == 0) {
      _inconsistency();
    }
    if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
        ((iVar5 = *(int *)(param_1 + 0x14), iVar5 == 0x19930520 ||
         ((iVar5 == 0x19930521 || (iVar5 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0)) {
      _inconsistency();
    }
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec == (void *)0x0) goto LAB_005c487a;
    p_Var4 = __getptd();
    piVar8 = p_Var4->_curexcspec;
    p_Var4 = __getptd();
    iVar5 = 0;
    p_Var4->_curexcspec = (void *)0x0;
    uVar2 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
    if (uVar2 != '\0') goto LAB_005c487a;
    p_Var7 = (_s_FuncInfo *)0x0;
    if (0 < *piVar8) {
      do {
        bVar3 = type_info::operator==
                          (*(type_info **)((int)&p_Var7->maxState + piVar8[1]),
                           (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
        if (bVar3) goto LAB_005c484b;
        iVar5 = iVar5 + 1;
        p_Var7 = (_s_FuncInfo *)&p_Var7->pTryBlockMap;
      } while (iVar5 < *piVar8);
    }
    do {
      terminate();
LAB_005c484b:
      ___DestructExceptionObject(param_1,1);
      std::bad_exception::bad_exception((bad_exception *)&stack0xffffffd0,"bad exception");
      __CxxThrowException_8(&stack0xffffffd0,&DAT_00941374);
LAB_005c487a:
      p_Var9 = (_s_FuncInfo *)param_1;
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
         ((p_Var1 = *(_s_FuncInfo **)(param_1 + 0x14), p_Var1 == p_Var7 ||
          ((p_Var1 == (_s_FuncInfo *)0x19930521 || (p_Var1 == (_s_FuncInfo *)0x19930522)))))) {
        if (param_5->nTryBlocks != 0) {
          p_Var6 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
          for (; local_14 < local_20; local_14 = local_14 + 1) {
            if ((p_Var6->tryLow <= local_c) && (local_c <= p_Var6->tryHigh)) {
              local_10 = p_Var6->pHandlerArray;
              for (local_1c = p_Var6->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
                piVar8 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
                for (local_18 = *piVar8; 0 < local_18; local_18 = local_18 + -1) {
                  piVar8 = piVar8 + 1;
                  p_Var9 = (_s_FuncInfo *)*piVar8;
                  iVar5 = ___TypeMatch(local_10,p_Var9,*(undefined4 *)(param_1 + 0x1c));
                  if (iVar5 != 0) {
                    local_5 = '\x01';
                    CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,p_Var9,
                            (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                            unaff_ESI,unaff_EBX,(uchar)in_stack_ffffffd0);
                    goto LAB_005c4963;
                  }
                }
                local_10 = local_10 + 1;
              }
            }
LAB_005c4963:
            p_Var6 = p_Var6 + 1;
          }
        }
        if (param_6 != '\0') {
          ___DestructExceptionObject(param_1,1);
        }
        if ((((local_5 != '\0') || ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521))
            || (param_5->pESTypeList == (ESTypeList *)0x0)) ||
           (uVar2 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI), uVar2 != '\0'))
        goto LAB_005c4a39;
        __getptd();
        __getptd();
        p_Var4 = __getptd();
        p_Var4->_curexception = param_1;
        p_Var4 = __getptd();
        p_Var4->_curcontext = param_3;
        pEVar10 = param_8;
        if (param_8 == (EHRegistrationNode *)0x0) {
          pEVar10 = param_2;
        }
        _UnwindNestedFrames(pEVar10,param_1);
        ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
        FUN_005c41b2(param_5->pESTypeList);
        p_Var9 = param_5;
      }
LAB_005c4a0d:
      if (param_5->nTryBlocks == 0) goto LAB_005c4a39;
      p_Var7 = param_5;
    } while (param_6 != '\0');
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var9,param_2,param_3,param_4,param_5,local_c,param_7,param_8);
LAB_005c4a39:
    p_Var4 = __getptd();
    if (p_Var4->_curexcspec != (void *)0x0) {
      _inconsistency();
    }
  }
  return;
}

