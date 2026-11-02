// rea decompile_all
// name: FUN_00487090
// address: 0x487090
// body: available
// range: 0x487090-0x487163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487090(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_EDI;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar1 = *(int *)(unaff_EDI + 0x184);
  local_c = 0;
  iVar2 = *(int *)(unaff_EDI + 0x118);
  if (0 < *(int *)(unaff_EDI + 0x24)) {
    piVar6 = (int *)(*(int *)(unaff_EDI + 0xc4) + 0xc);
    do {
      local_10 = (piVar6[6] * *piVar6) / *(int *)(unaff_EDI + 0x118);
      local_8 = *(undefined4 **)(local_c * 4 + *(int *)(iVar1 + 0x3c));
      if (0 < local_10) {
        puVar7 = local_8 + (iVar2 + 2) * local_10;
        puVar5 = local_8 + -local_10;
        puVar4 = local_8 + (iVar2 + 1) * local_10;
        iVar8 = *(int *)(local_c * 4 + *(int *)(iVar1 + 0x38)) - (int)local_8;
        do {
          *(undefined4 *)(iVar8 + (int)puVar5) = *(undefined4 *)(iVar8 + (int)puVar4);
          *puVar5 = *puVar4;
          *(undefined4 *)(iVar8 + (int)puVar7) = *(undefined4 *)(iVar8 + (int)local_8);
          uVar3 = *local_8;
          local_8 = local_8 + 1;
          *puVar7 = uVar3;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      local_c = local_c + 1;
      piVar6 = piVar6 + 0x15;
    } while (local_c < *(int *)(unaff_EDI + 0x24));
  }
  return;
}

