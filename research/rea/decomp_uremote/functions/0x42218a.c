// rea decompile_all
// name: FUN_0042218a
// address: 0x42218a
// body: available
// range: 0x42218a-0x422260 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042218a(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int in_EDX;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  if (*(int *)(in_EDX + 0x1c) != -1) {
    local_8 = *(int *)(in_EDX + 0x1c) + 1;
    local_c = *(uint *)(in_EDX + 0x24);
    if (local_c < *(uint *)(in_EDX + 0x28)) {
      puVar2 = (undefined1 *)(local_c * 0xc + 0x15 + *(int *)(in_EDX + 0x10));
      do {
        uVar3 = CONCAT31(CONCAT21(CONCAT11(puVar2[-5],puVar2[-4]),puVar2[-3]),puVar2[-2]);
        uVar4 = CONCAT31(CONCAT21(CONCAT11(puVar2[-1],*puVar2),puVar2[1]),puVar2[2]);
        if (local_8 < uVar3) {
          local_8 = uVar3;
        }
        if (local_8 <= uVar4) {
          do {
            iVar1 = (CONCAT31(CONCAT21(CONCAT11(puVar2[3],puVar2[4]),puVar2[5]),puVar2[6]) - uVar3)
                    + local_8;
            if (iVar1 != 0) {
              *(uint *)(in_EDX + 0x1c) = local_8;
              *(int *)(in_EDX + 0x20) = iVar1;
              *(uint *)(in_EDX + 0x24) = local_c;
              return;
            }
            local_8 = local_8 + 1;
          } while (local_8 <= uVar4);
        }
        local_c = local_c + 1;
        puVar2 = puVar2 + 0xc;
      } while (local_c < *(uint *)(in_EDX + 0x28));
    }
  }
  *(undefined1 *)(in_EDX + 0x18) = 0;
  return;
}

