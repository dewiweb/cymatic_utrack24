// rea decompile_all
// name: FUN_004eea2e
// address: 0x4eea2e
// body: available
// range: 0x4eea2e-0x4eeb91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eea2e(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  int local_8;
  
  iVar3 = FUN_004fca44();
  iVar6 = iVar3 + -1;
  if (-1 < iVar6) {
    piVar5 = in_ECX + iVar3 + 0x3b;
    do {
      puVar4 = (undefined4 *)*piVar5;
      if ((puVar4 != (undefined4 *)0x0) && (*piVar5 = 0, puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)();
      }
      iVar6 = iVar6 + -1;
      piVar5 = piVar5 + -1;
    } while (-1 < iVar6);
  }
  cVar2 = FUN_004efb18();
  if (cVar2 == '\0') {
    iVar3 = thunk_FUN_004c1d58();
    if ((*(byte *)(in_ECX + 0x3a) & 1) != 0) {
      (**(code **)(*(int *)(iVar3 + 0x34) + 8))();
      FUN_004f6555();
    }
    if ((*(byte *)(in_ECX + 0x3a) & 2) != 0) {
      (**(code **)(*(int *)(iVar3 + 0x34) + 8))();
      FUN_004f6555();
    }
    if ((*(byte *)(in_ECX + 0x3a) & 4) != 0) {
      (**(code **)(*(int *)(iVar3 + 0x34) + 8))();
      FUN_004f6555();
    }
    piVar5 = in_ECX + 0x3c;
    local_8 = 3;
    do {
      if (*piVar5 != 0) {
        if (in_ECX[0x42] == 0) {
          puVar4 = (undefined4 *)FUN_005af82d();
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = juce::DocumentWindow::ButtonListenerProxy::vftable;
            puVar4[1] = in_ECX;
          }
          puVar1 = (undefined4 *)in_ECX[0x42];
          if ((puVar1 != puVar4) && (in_ECX[0x42] = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)();
          }
        }
        FUN_004c7d8c();
        FUN_004c2ddc();
        FUN_004c1064();
      }
      piVar5 = piVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    iVar3 = FUN_004ee9f3();
    if (iVar3 != 0) {
      FUN_004c751a();
      FUN_004c71a0();
      FUN_004c81ba();
    }
  }
  (**(code **)(*in_ECX + 0xb0))();
  FUN_004ef432();
  return;
}

