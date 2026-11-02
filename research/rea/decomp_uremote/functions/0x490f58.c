// rea decompile_all
// name: FUN_00490f58
// address: 0x490f58
// body: available
// range: 0x490f58-0x491121 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490f58(int param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  byte bVar3;
  
  if ((*(int *)(in_EAX + 0x144) != 0) || (*(int *)(in_EAX + 0x148) != 0)) {
    FUN_00491216();
    FUN_00490e48();
  }
  if (param_1 < 9) {
    if (0 < *(int *)(in_EAX + 0x140)) {
      FUN_00490a6e(*(undefined4 *)(in_EAX + 0x284),*(int *)(in_EAX + 0x140));
    }
    FUN_00490df7();
    if ((*(uint *)(in_EAX + 0x30) & 0x600080) != 0) {
      FUN_004909d1(*(undefined4 *)(in_EAX + 0x284));
      FUN_00490df7();
      if (0 < *(int *)(in_EAX + 0x140)) {
        FUN_004909d1(*(int *)(in_EAX + 0x140));
      }
      FUN_00490df7();
    }
  }
  else {
    if ((*(byte *)(in_EAX + 0x10b) & 2) == 0) {
      bVar3 = *(byte *)(in_EAX + 0x15f);
    }
    else {
      bVar3 = *(byte *)(in_EAX + 0x15c);
      if (*(byte *)(in_EAX + 0x15c) < *(byte *)(in_EAX + 0x15d)) {
        bVar3 = *(byte *)(in_EAX + 0x15d);
      }
      if (bVar3 < *(byte *)(in_EAX + 0x15e)) {
        bVar3 = *(byte *)(in_EAX + 0x15e);
      }
    }
    if ((byte)(bVar3 - 1) < 0xf) {
      bVar3 = 0x10 - bVar3;
    }
    else {
      bVar3 = 0;
    }
    uVar2 = *(uint *)(in_EAX + 0x30) & 0x4000400;
    if ((uVar2 != 0) && (bVar3 < 5)) {
      bVar3 = 5;
    }
    if (8 < bVar3) {
      bVar3 = 8;
    }
    iVar1 = *(int *)(in_EAX + 0x140);
    *(uint *)(in_EAX + 0x13c) = (uint)bVar3;
    if (uVar2 == 0) {
      if (0 < iVar1) {
        FUN_00490a6e(*(undefined4 *)(in_EAX + 0x284),iVar1);
      }
      FUN_00490b8f();
    }
    else {
      if (0 < iVar1) {
        FUN_00490a26(*(undefined4 *)(in_EAX + 0x284),iVar1);
      }
      FUN_00490ce0();
    }
    if ((*(uint *)(in_EAX + 0x30) & 0x600080) != 0) {
      FUN_004909d1(*(undefined4 *)(in_EAX + 0x284));
      FUN_00490b8f();
      if (0 < *(int *)(in_EAX + 0x140)) {
        FUN_004909d1(*(int *)(in_EAX + 0x140));
      }
      FUN_00490b8f();
    }
  }
  return;
}

