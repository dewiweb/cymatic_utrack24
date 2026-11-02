// rea decompile_all
// name: FUN_005a4880
// address: 0x5a4880
// body: available
// range: 0x5a4880-0x5a4b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a4910) */
/* WARNING: Removing unreachable block (ram,0x005a496d) */

undefined4 *
FUN_005a4880(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined2 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined2 param_9,undefined2 param_10,undefined2 param_11,undefined2 param_12,
            int param_13)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d760e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_13 != 0) {
    in_ECX[10] = &DAT_005f0040;
    in_ECX[0x29] = &DAT_005efda0;
    in_ECX[0x2c] = &DAT_005ea7d8;
    in_ECX[0x26] = CPNS::IObject::vftable;
    in_ECX[0x28] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x29] + 4) + 0xa4) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x2b] = CPNS::IParameter::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x2c] + 4) + 0xb0) = CPNS::IParameter::vftable;
    local_8 = 2;
  }
  FUN_005a2650(1,param_1,param_2,param_3,param_4,param_10,param_11,param_12,0);
  local_8 = 3;
  *in_ECX = CPCHAI::CModifierParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) =
       CPCHAI::CModifierParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) =
       CPCHAI::CModifierParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CModifierParameter::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x70;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x78;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x84;
  in_ECX[0x1d] = 0;
  FUN_00501870(param_6);
  local_8._0_1_ = 4;
  FUN_00501870(param_7);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00501870(param_8);
  *(undefined2 *)(in_ECX + 0x24) = param_9;
  *(undefined2 *)((int)in_ECX + 0x92) = param_5;
  ExceptionList = local_10;
  return in_ECX;
}

