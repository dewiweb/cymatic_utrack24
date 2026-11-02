// rea decompile_all
// name: FUN_00583530
// address: 0x583530
// body: available
// range: 0x583530-0x58369b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583530(void)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0xd8) != 0) {
    FUN_005b13e8(*(undefined4 *)(in_ECX + 0xd8));
    *(undefined4 *)(in_ECX + 0xd8) = 0;
  }
  if (*(int *)(in_ECX + 0xdc) != 0) {
    for (local_8 = 0; local_8 < (int)(uint)*(ushort *)(in_ECX + 0xce); local_8 = local_8 + 1) {
      if ((*(int *)(*(int *)(in_ECX + 0xdc) + local_8 * 4) != 0) &&
         (iVar1 = *(int *)(*(int *)(in_ECX + 0xdc) + local_8 * 4), iVar1 != 0)) {
        FUN_00501900();
        FUN_005af7b6(iVar1);
      }
    }
    FUN_005b13e8(*(undefined4 *)(in_ECX + 0xdc));
    *(undefined4 *)(in_ECX + 0xdc) = 0;
  }
  if (*(int *)(in_ECX + 0xe0) != 0) {
    FUN_005b13e8(*(undefined4 *)(in_ECX + 0xe0));
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  *(undefined2 *)(in_ECX + 0xd0) = 0;
  *(undefined2 *)(in_ECX + 0xce) = 0;
  *(undefined2 *)(in_ECX + 0xcc) = 0;
  *(undefined2 *)(in_ECX + 0xd6) = 0;
  *(undefined2 *)(in_ECX + 0xd4) = 0;
  *(undefined2 *)(in_ECX + 0xd2) = 0;
  return;
}

