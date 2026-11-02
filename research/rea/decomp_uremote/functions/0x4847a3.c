// rea decompile_all
// name: FUN_004847a3
// address: 0x4847a3
// body: available
// range: 0x4847a3-0x48484b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004847a3(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0xcc;
  }
  if (*(char *)(*(int *)(unaff_ESI + 0x180) + 8) != '\0') {
    puVar1 = (uint *)(unaff_ESI + 0x78);
    do {
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(unaff_ESI + 0x60)) {
        do {
          if (*(int *)(unaff_ESI + 8) != 0) {
            *(uint *)(*(int *)(unaff_ESI + 8) + 4) = uVar3;
            *(undefined4 *)(*(int *)(unaff_ESI + 8) + 8) = *(undefined4 *)(unaff_ESI + 0x60);
            (*(code *)**(undefined4 **)(unaff_ESI + 8))();
          }
          uVar2 = *puVar1;
          (**(code **)(*(int *)(unaff_ESI + 0x184) + 4))();
          uVar3 = *puVar1;
          if (uVar3 == uVar2) {
            return uVar3 & 0xffffff00;
          }
        } while (uVar3 < *(uint *)(unaff_ESI + 0x60));
      }
      (**(code **)(*(int *)(unaff_ESI + 0x180) + 4))();
      (*(code *)**(undefined4 **)(unaff_ESI + 0x180))();
      *puVar1 = 0;
    } while (*(char *)(*(int *)(unaff_ESI + 0x180) + 8) != '\0');
  }
  iVar4 = (*(char *)(unaff_ESI + 0x41) != '\0') + 0xcd;
  *(int *)(unaff_ESI + 0x14) = iVar4;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

