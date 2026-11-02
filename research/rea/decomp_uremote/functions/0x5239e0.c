// rea decompile_all
// name: FUN_005239e0
// address: 0x5239e0
// body: available
// range: 0x5239e0-0x523bc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005239e0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  short local_c;
  
  if (1999 < (uint)(param_1 - *(int *)(in_ECX + 0x438))) {
    *(int *)(in_ECX + 0x438) = param_1;
    uVar2 = FUN_00529260();
    FUN_0052c900();
    if (*(uint *)(in_ECX + 0x42c) < uVar2) {
      *(short *)(in_ECX + 0x428) = *(short *)(in_ECX + 0x428) + 1;
      if (*(short *)(in_ECX + 0x428) == 0xc) {
        FUN_005282f0(uVar2);
      }
    }
    else {
      *(undefined2 *)(in_ECX + 0x428) = 0;
    }
    *(uint *)(in_ECX + 0x42c) = uVar2;
    uVar2 = FUN_0052c900();
    if (*(uint *)(in_ECX + 0x434) < (uVar2 & 0xffff)) {
      *(short *)(in_ECX + 0x430) = *(short *)(in_ECX + 0x430) + 1;
      if (*(short *)(in_ECX + 0x430) == 0xc) {
        FUN_005283d0();
      }
    }
    else {
      *(undefined2 *)(in_ECX + 0x430) = 0;
    }
    *(uint *)(in_ECX + 0x434) = uVar2 & 0xffff;
    local_c = 0;
    while (iVar3 = FUN_0052c940(local_c), iVar3 != 0) {
      uVar2 = param_1 - *(int *)(iVar3 + 0xc);
      if ((*(char *)(iVar3 + 0x4c) == '\0') || (*(char *)(iVar3 + 0x4d) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (60000 < uVar2)) {
        FUN_005284c0(iVar3,uVar2);
      }
      FUN_00544620();
      local_c = local_c + 1;
    }
  }
  return;
}

