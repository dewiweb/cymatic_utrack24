// rea decompile_all
// name: FUN_00481c02
// address: 0x481c02
// body: available
// range: 0x481c02-0x481ccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481c02(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  FUN_00481979(0xda);
  FUN_00481993();
  FUN_0048194e(*(undefined4 *)(in_EAX + 0xe4));
  local_8 = 0;
  if (0 < *(int *)(in_EAX + 0xe4)) {
    piVar3 = (int *)(in_EAX + 0xe8);
    do {
      puVar1 = (undefined4 *)*piVar3;
      FUN_0048194e(*puVar1);
      iVar2 = puVar1[5];
      iVar4 = puVar1[6];
      if ((*(char *)(in_EAX + 0xd4) != '\0') &&
         ((*(int *)(in_EAX + 300) != 0 ||
          ((iVar4 = 0, *(int *)(in_EAX + 0x134) != 0 && (*(char *)(in_EAX + 0xb1) == '\0')))))) {
        iVar2 = 0;
      }
      FUN_0048194e(iVar2 * 0x10 + iVar4);
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < *(int *)(in_EAX + 0xe4));
  }
  FUN_0048194e(*(undefined4 *)(in_EAX + 300));
  FUN_0048194e(*(undefined4 *)(in_EAX + 0x130));
  FUN_0048194e(*(int *)(in_EAX + 0x134) * 0x10 + *(int *)(in_EAX + 0x138));
  return;
}

