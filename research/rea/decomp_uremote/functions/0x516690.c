// rea decompile_all
// name: FUN_00516690
// address: 0x516690
// body: available
// range: 0x516690-0x5168e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00516719) */
/* WARNING: Removing unreachable block (ram,0x00516776) */

undefined4 * FUN_00516690(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf37a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10] = &DAT_005e9928;
    in_ECX[0x1e] = &DAT_005efda0;
    in_ECX[0x21] = &DAT_005ea7d8;
    in_ECX[0x1b] = CPNS::IObject::vftable;
    in_ECX[0x1d] = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x1e] + 4) + 0x78) = CPNS::IHookedObject::vftable
    ;
    in_ECX[0x20] = CPNS::ITimer::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x21] + 4) + 0x84) = CPNS::ITimer::vftable;
    local_8 = 2;
  }
  FUN_0054f350(8,*(undefined4 *)(param_1 + 0xc),in_ECX,0);
  in_ECX[0x12] = CPG::CPListItem<CPCHAI::CTimer>::vftable;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *in_ECX = CPCHAI::CTimer::vftable;
  in_ECX[0x12] = CPCHAI::CTimer::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x28) = CPCHAI::CTimer::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x28) = CPCHAI::CTimer::vftable;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x28) = CPCHAI::CTimer::vftable;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 4) + 0x24) = *(int *)(in_ECX[10] + 4) + -0x44;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 8) + 0x24) = *(int *)(in_ECX[10] + 8) + -0x4c;
  *(int *)((int)in_ECX + *(int *)(in_ECX[10] + 0xc) + 0x24) = *(int *)(in_ECX[10] + 0xc) + -0x58;
  in_ECX[0x15] = param_1;
  in_ECX[0x16] = param_2;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 1;
  *(undefined1 *)((int)in_ECX + 0x65) = 0;
  ExceptionList = local_10;
  return in_ECX;
}

