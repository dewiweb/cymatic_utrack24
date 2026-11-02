// rea decompile_all
// name: FUN_0064b190
// address: 0x64b190
// body: available
// range: 0x64b190-0x64b32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b190(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined1 *in_EDX;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  puVar7 = in_EDX + *(int *)(in_ECX + 4);
  puVar2 = in_EDX;
  if (*(char *)(in_ECX + 10) == '\x02') {
    if (*(char *)(in_ECX + 9) == '\b') {
      if (param_1 == 0) {
        puVar2 = in_EDX + 1;
        iVar3 = 2;
      }
      else {
        iVar3 = 1;
      }
      puVar5 = in_EDX + iVar3;
      uVar6 = 0;
      uVar4 = (uint)(puVar7 + (1 - (int)puVar5)) >> 1;
      if (puVar7 < puVar5) {
        uVar4 = 0;
      }
      if (uVar4 != 0) {
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 2;
          *puVar2 = uVar1;
          uVar6 = uVar6 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar6 < uVar4);
      }
      *(undefined1 *)(in_ECX + 0xb) = 8;
    }
    else {
      if (*(char *)(in_ECX + 9) != '\x10') {
        return;
      }
      if (param_1 == 0) {
        puVar2 = in_EDX + 2;
        iVar3 = 4;
      }
      else {
        iVar3 = 2;
      }
      for (puVar5 = in_EDX + iVar3; puVar5 < puVar7; puVar5 = puVar5 + 4) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2 = puVar2 + 2;
      }
      *(undefined1 *)(in_ECX + 0xb) = 0x10;
    }
    *(undefined1 *)(in_ECX + 10) = 1;
    if (*(char *)(in_ECX + 8) == '\x04') {
      *(undefined1 *)(in_ECX + 8) = 0;
      *(int *)(in_ECX + 4) = (int)puVar2 - (int)in_EDX;
      return;
    }
  }
  else {
    if (*(char *)(in_ECX + 10) != '\x04') {
      return;
    }
    if (*(char *)(in_ECX + 9) == '\b') {
      if (param_1 == 0) {
        puVar2 = in_EDX + 3;
        iVar3 = 4;
      }
      else {
        iVar3 = 1;
      }
      for (puVar5 = in_EDX + iVar3; puVar5 < puVar7; puVar5 = puVar5 + 4) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        puVar2 = puVar2 + 3;
      }
      *(undefined1 *)(in_ECX + 0xb) = 0x18;
    }
    else {
      if (*(char *)(in_ECX + 9) != '\x10') {
        return;
      }
      if (param_1 == 0) {
        puVar2 = in_EDX + 6;
        iVar3 = 8;
      }
      else {
        iVar3 = 2;
      }
      for (puVar5 = in_EDX + iVar3; puVar5 < puVar7; puVar5 = puVar5 + 8) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        puVar2[3] = puVar5[3];
        puVar2[4] = puVar5[4];
        puVar2[5] = puVar5[5];
        puVar2 = puVar2 + 6;
      }
      *(undefined1 *)(in_ECX + 0xb) = 0x30;
    }
    *(undefined1 *)(in_ECX + 10) = 3;
    if (*(char *)(in_ECX + 8) == '\x06') {
      *(undefined1 *)(in_ECX + 8) = 2;
    }
  }
  *(int *)(in_ECX + 4) = (int)puVar2 - (int)in_EDX;
  return;
}

