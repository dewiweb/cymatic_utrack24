// rea decompile_all
// name: FUN_0066bc50
// address: 0x66bc50
// body: available
// range: 0x66bc50-0x66bd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066bc50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  char *in_EDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(in_ECX + 0xc) == '\0') {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      if (*(char *)(in_ECX + 0xc) == '\0') {
        uVar5 = *(int *)(in_ECX + 0x1c) + 1;
        uVar6 = ((int)*in_EDX & 1U) << (0x18U - (char)uVar5 & 0x1f) | *(uint *)(in_ECX + 0x18);
        if (7 < (int)uVar5) {
          uVar4 = uVar5 >> 3;
          uVar5 = uVar5 + uVar4 * -8;
          do {
            **(undefined1 **)(in_ECX + 0x10) = (char)(uVar6 >> 0x10);
            *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
            piVar1 = (int *)(in_ECX + 0x14);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x20) + 0x18);
              cVar3 = (*(code *)puVar2[3])(*(int *)(in_ECX + 0x20));
              if (cVar3 == '\0') {
                *(undefined4 *)(**(int **)(in_ECX + 0x20) + 0x14) = 0x18;
                (**(code **)**(undefined4 **)(in_ECX + 0x20))(*(undefined4 **)(in_ECX + 0x20));
              }
              *(undefined4 *)(in_ECX + 0x10) = *puVar2;
              *(undefined4 *)(in_ECX + 0x14) = puVar2[1];
            }
            if (((int)uVar6 >> 0x10 & 0xffU) == 0xff) {
              **(undefined1 **)(in_ECX + 0x10) = 0;
              *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
              piVar1 = (int *)(in_ECX + 0x14);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x20) + 0x18);
                cVar3 = (*(code *)puVar2[3])(*(int *)(in_ECX + 0x20));
                if (cVar3 == '\0') {
                  *(undefined4 *)(**(int **)(in_ECX + 0x20) + 0x14) = 0x18;
                  (**(code **)**(undefined4 **)(in_ECX + 0x20))(*(undefined4 **)(in_ECX + 0x20));
                }
                *(undefined4 *)(in_ECX + 0x10) = *puVar2;
                *(undefined4 *)(in_ECX + 0x14) = puVar2[1];
              }
            }
            uVar6 = uVar6 << 8;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        *(uint *)(in_ECX + 0x18) = uVar6;
        *(uint *)(in_ECX + 0x1c) = uVar5;
      }
      in_EDX = in_EDX + 1;
    }
  }
  return;
}

