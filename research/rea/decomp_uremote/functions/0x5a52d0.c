// rea decompile_all
// name: FUN_005a52d0
// address: 0x5a52d0
// body: available
// range: 0x5a52d0-0x5a54ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a535e) */
/* WARNING: Removing unreachable block (ram,0x005a53bb) */

undefined4 *
FUN_005a52d0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7,int param_8)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7723;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_8 != 0) {
    in_ECX[10] = &DAT_005effa4;
    in_ECX[0x21] = &DAT_005efda0;
    in_ECX[0x24] = &DAT_005ea7d8;
    in_ECX[0x1e] = CPNS::IObject::vftable;
    in_ECX[0x20] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x21] + 4) + 0x84) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x23] = CPNS::IParameter::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x24] + 4) + 0x90) = CPNS::IParameter::vftable;
    local_8 = 2;
  }
  FUN_005a2650(4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  *in_ECX = CPCHAI::CTextParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CTextParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CTextParameter::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) =
       CPCHAI::CTextParameter::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x50;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x58;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -100;
  ExceptionList = local_10;
  return in_ECX;
}

