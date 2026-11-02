// rea decompile_all
// name: FUN_0041ed76
// address: 0x41ed76
// body: available
// range: 0x41ed76-0x41ee96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0041ed76(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_8;
  
  *(int *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x20) + -0x20;
  iVar5 = *(int *)(in_EAX + 0x28);
  *(int *)(in_EAX + 0x58) = iVar5;
  *(undefined4 *)(in_EAX + 0x5c) = 0;
  *(undefined1 *)(in_EAX + 0x57) = 0;
  *(undefined1 *)(in_EAX + 0x56) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(int *)(iVar5 + 8) = iVar5;
  iVar5 = 0;
  *(undefined2 *)(in_EAX + 0x54) = 0;
  local_8 = 0;
  if (0 < *(short *)(in_EAX + 0x80)) {
    do {
      *(undefined4 *)(in_EAX + 100) = 0;
      *(undefined4 *)(in_EAX + 0x60) = 0;
      cVar3 = FUN_0041ea85(iVar5,*(undefined2 *)(local_8 * 2 + *(int *)(in_EAX + 0x8c)),param_1);
      if (cVar3 != '\0') goto LAB_0041ee90;
      iVar4 = *(int *)(in_EAX + 4);
      uVar1 = *(uint *)(in_EAX + 0x48);
      iVar5 = *(short *)(local_8 * 2 + *(int *)(in_EAX + 0x8c)) + 1;
      if (((((uVar1 & iVar4 - 1U) == 0) && (*(int *)(in_EAX + 0x4c) <= (int)uVar1)) &&
          ((int)uVar1 <= *(int *)(in_EAX + 0x50))) &&
         ((*(int *)(in_EAX + 0x60) != 0 &&
          (((*(uint *)(*(int *)(in_EAX + 0x58) + 0xc) ^ *(uint *)(*(int *)(in_EAX + 0x60) + 0xc)) &
           8) == 0)))) {
        *(int *)(in_EAX + 0x28) = *(int *)(in_EAX + 0x28) + -4;
      }
      iVar2 = *(int *)(in_EAX + 0x58);
      if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
        iVar4 = ((uVar1 - 1) + iVar4 & -iVar4) - uVar1;
        bVar6 = SBORROW4(iVar4,*(int *)(in_EAX + 8));
        iVar4 = iVar4 - *(int *)(in_EAX + 8);
      }
      else {
        iVar4 = uVar1 - (-iVar4 & uVar1);
        bVar6 = SBORROW4(iVar4,*(int *)(in_EAX + 8));
        iVar4 = iVar4 - *(int *)(in_EAX + 8);
      }
      cVar3 = FUN_0041e100(bVar6 == iVar4 < 0);
      if (cVar3 != '\0') goto LAB_0041ee90;
      if (*(int *)(in_EAX + 0x60) != 0) {
        *(int *)(iVar2 + 0x1c) = *(int *)(in_EAX + 0x60);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)(in_EAX + 0x80));
  }
  cVar3 = FUN_0041e1e0();
  if (cVar3 == '\0') {
    bVar6 = *(uint *)(in_EAX + 0x24) <= *(uint *)(in_EAX + 0x28);
  }
  else {
LAB_0041ee90:
    bVar6 = true;
  }
  return bVar6;
}

