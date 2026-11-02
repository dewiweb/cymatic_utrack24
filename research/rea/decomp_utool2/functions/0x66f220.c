// rea decompile_all
// name: FUN_0066f220
// address: 0x66f220
// body: available
// range: 0x66f220-0x66f30d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0066f220(int param_1)

{
  int *piVar1;
  char cVar2;
  int *in_ECX;
  uint in_EDX;
  int iVar3;
  uint uVar4;
  
  iVar3 = in_ECX[3];
  if (param_1 == 0) {
    *(undefined4 *)(*(int *)in_ECX[8] + 0x14) = 0x28;
    (*(code *)**(undefined4 **)in_ECX[8])((undefined4 *)in_ECX[8]);
  }
  iVar3 = iVar3 + param_1;
  uVar4 = ((1 << ((byte)param_1 & 0x1f)) - 1U & in_EDX) << (0x18U - (char)iVar3 & 0x1f) | in_ECX[2];
  do {
    if (iVar3 < 8) {
      in_ECX[2] = uVar4;
      in_ECX[3] = iVar3;
      return 1;
    }
    *(char *)*in_ECX = (char)(uVar4 >> 0x10);
    *in_ECX = *in_ECX + 1;
    piVar1 = in_ECX + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(in_ECX[8] + 0x18);
      cVar2 = (*(code *)piVar1[3])(in_ECX[8]);
      if (cVar2 == '\0') {
        return 0;
      }
      *in_ECX = *piVar1;
      in_ECX[1] = piVar1[1];
    }
    if (((int)uVar4 >> 0x10 & 0xffU) == 0xff) {
      *(undefined1 *)*in_ECX = 0;
      *in_ECX = *in_ECX + 1;
      piVar1 = in_ECX + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar1 = *(int **)(in_ECX[8] + 0x18);
        cVar2 = (*(code *)piVar1[3])(in_ECX[8]);
        if (cVar2 == '\0') {
          return 0;
        }
        *in_ECX = *piVar1;
        in_ECX[1] = piVar1[1];
      }
    }
    iVar3 = iVar3 + -8;
    uVar4 = uVar4 << 8;
  } while( true );
}

