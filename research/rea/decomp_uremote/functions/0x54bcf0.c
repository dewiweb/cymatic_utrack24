// rea decompile_all
// name: FUN_0054bcf0
// address: 0x54bcf0
// body: available
// range: 0x54bcf0-0x54bf32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0054bd8f) */

undefined4 * FUN_0054bcf0(undefined4 param_1,undefined1 param_2,int param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2c7c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005ed910;
    in_ECX[100] = &DAT_005efda0;
    in_ECX[0x67] = &DAT_005efa98;
    in_ECX[0x6a] = &DAT_005eda5c;
    in_ECX[0x61] = CPNS::IObject::vftable;
    in_ECX[99] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[100] + 4) + 400) = CPNS::IHookedObject::vftable;
    local_8 = 1;
    FUN_005482a0(0);
    local_8 = 2;
    FUN_0054c420(0);
    local_8 = 3;
  }
  FUN_00595780(0x8204,param_1,param_2,1,0);
  *in_ECX = CPCHAI::CAppMIDISysex::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CAppMIDISysex::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CAppMIDISysex::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CAppMIDISysex::vftable
  ;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x28) =
       CPCHAI::CAppMIDISysex::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x15c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x164;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x170;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0x10) + 0x24) = *(int *)(in_ECX[10] + 0x10) + -0x17c;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  *(undefined1 *)((int)in_ECX + 0x79) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

