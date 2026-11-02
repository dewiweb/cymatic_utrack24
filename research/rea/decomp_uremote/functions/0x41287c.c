// rea decompile_all
// name: FUN_0041287c
// address: 0x41287c
// body: available
// range: 0x41287c-0x412932 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041287c(int *param_1)

{
  uint uVar1;
  uint *in_EAX;
  uint uVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  int iVar4;
  int local_8;
  
  local_8 = *(int *)(unaff_ESI + 0x34);
  uVar1 = *in_EAX;
  iVar4 = 0;
  uVar2 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x3c) + 0x20) + 0x14))
                    (in_EAX[1],*(undefined4 *)(unaff_ESI + 0x30));
  if ((uVar2 == 0) || (uVar2 <= uVar1)) {
    local_8 = 6;
  }
  else {
    iVar4 = FUN_00411912(0x120,&local_8);
    if (local_8 == 0) {
      uVar2 = uVar2 - (uVar1 - (uVar1 & 0xf));
      if (0x10 < uVar2) {
        uVar2 = 0x10;
      }
      FUN_0041250a();
      *(uint *)(iVar4 + 0x1c) = uVar2;
      if (uVar2 != 0) {
        puVar3 = (undefined1 *)(iVar4 + 0x20);
        do {
          *puVar3 = 0xff;
          puVar3 = puVar3 + 0x10;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      local_8 = FUN_0041273c(uVar1,0);
      if (local_8 != 0) {
        thunk_FUN_004126ee(iVar4);
        iVar4 = 0;
      }
    }
  }
  *param_1 = iVar4;
  return local_8;
}

