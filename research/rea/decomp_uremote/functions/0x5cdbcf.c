// rea decompile_all
// name: FUN_005cdbcf
// address: 0x5cdbcf
// body: available
// range: 0x5cdbcf-0x5cdc88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

uint FUN_005cdbcf(int *param_1,int param_2,_s_RTTICompleteObjectLocator *param_3,
                 TypeDescriptor *param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  int iVar4;
  TypeDescriptor *pTVar5;
  PMD *in_stack_ffffffc4;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 *puStack_18;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x5cdbdb;
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_8 = 0;
    pvVar2 = (void *)FUN_005cd8c0();
    pTVar5 = (TypeDescriptor *)((int)param_1 + (-(int)pvVar2 - param_2));
    uVar1 = *(uint *)(*(int *)(*(int *)(*param_1 + -4) + 0x10) + 4);
    if ((uVar1 & 1) == 0) {
      p_Var3 = FindSITargetTypeInstance(param_3,param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else if ((uVar1 & 2) == 0) {
      p_Var3 = FindMITargetTypeInstance
                         (pvVar2,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    else {
      p_Var3 = FindVITargetTypeInstance
                         (pvVar2,param_3,pTVar5,(int)param_4,(TypeDescriptor *)in_stack_ffffffc4);
    }
    if (p_Var3 == (_s_RTTIBaseClassDescriptor *)0x0) {
      uVar1 = 0;
      local_20 = 0;
      if (param_5 != 0) {
        FUN_005afc09("Bad dynamic_cast!");
        __CxxThrowException_8(local_2c,&DAT_00941710);
        return (uint)(*(int *)*puStack_18 == -0x3ffffffb);
      }
    }
    else {
      iVar4 = PMDtoOffset(pvVar2,in_stack_ffffffc4);
      uVar1 = iVar4 + (int)pvVar2;
    }
  }
  return uVar1;
}

