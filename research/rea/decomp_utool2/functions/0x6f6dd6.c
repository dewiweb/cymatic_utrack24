// rea decompile_all
// name: FUN_006f6dd6
// address: 0x6f6dd6
// body: available
// range: 0x6f6dd6-0x6f6e99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

uint FUN_006f6dd6(void **param_1,int param_2,TypeDescriptor *param_3,TypeDescriptor *param_4,
                 int param_5)

{
  _s_RTTICompleteObjectLocator *p_Var1;
  uint uVar2;
  void *pvVar3;
  _s_RTTIBaseClassDescriptor *p_Var4;
  int iVar5;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 *puStack_18;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x6f6de2;
  if (param_1 == (void **)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_8 = 0;
    pvVar3 = FindCompleteObject(param_1);
    p_Var1 = *(_s_RTTICompleteObjectLocator **)((int)*param_1 + -4);
    iVar5 = (int)param_1 + (-(int)pvVar3 - param_2);
    if ((*(uint *)(*(int *)(p_Var1 + 0x10) + 4) & 1) == 0) {
      p_Var4 = FindSITargetTypeInstance(p_Var1,param_3,param_4);
    }
    else if ((*(uint *)(*(int *)(p_Var1 + 0x10) + 4) & 2) == 0) {
      p_Var4 = FindMITargetTypeInstance(pvVar3,p_Var1,param_3,iVar5,param_4);
    }
    else {
      p_Var4 = FindVITargetTypeInstance(pvVar3,p_Var1,param_3,iVar5,param_4);
    }
    if (p_Var4 == (_s_RTTIBaseClassDescriptor *)0x0) {
      local_20 = 0;
      if (param_5 != 0) {
        construct_from_string_literal(local_2c,"Bad dynamic_cast!");
        __CxxThrowException_8(local_2c,&DAT_00c4d114);
        return (uint)(*(int *)*puStack_18 == -0x3ffffffb);
      }
    }
    else {
      iVar5 = PMDtoOffset(pvVar3,(PMD *)(p_Var4 + 8));
      uVar2 = (int)pvVar3 + iVar5;
    }
  }
  return uVar2;
}

