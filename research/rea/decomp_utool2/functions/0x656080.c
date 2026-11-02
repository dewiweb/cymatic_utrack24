// rea decompile_all
// name: FUN_00656080
// address: 0x656080
// body: available
// range: 0x656080-0x65617e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00656080(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *(uint *)(in_ECX + 0xd0);
  iVar3 = 0;
  iVar7 = 0x18;
  do {
    uVar5 = uVar2 >> ((byte)iVar7 & 0x1f);
    iVar7 = iVar7 + -8;
    uVar6 = uVar5 & 0xff;
    if ((uVar6 - 0x41 < 0x3a) && ((uVar6 < 0x5b || (0x60 < uVar6)))) {
      *(char *)(iVar3 + in_EDX) = (char)uVar5;
      iVar4 = iVar3;
    }
    else {
      *(undefined1 *)(iVar3 + in_EDX) = 0x5b;
      *(char *)(iVar3 + 1 + in_EDX) = "0123456789ABCDEF"[(int)uVar6 >> 4];
      *(char *)(iVar3 + 2 + in_EDX) = "0123456789ABCDEF"[uVar5 & 0xf];
      iVar4 = iVar3 + 3;
      *(undefined1 *)(iVar4 + in_EDX) = 0x5d;
    }
    iVar3 = iVar4 + 1;
  } while (-1 < iVar7);
  if (param_1 != 0) {
    iVar7 = 0;
    *(undefined2 *)(iVar3 + in_EDX) = 0x203a;
    iVar3 = iVar4 + 3;
    while (*(char *)(iVar7 + param_1) != '\0') {
      *(char *)(iVar3 + in_EDX) = *(char *)(iVar7 + param_1);
      cVar1 = *(char *)(iVar7 + 1 + param_1);
      if (cVar1 == '\0') {
        iVar3 = iVar3 + 1;
        break;
      }
      *(char *)(iVar3 + 1 + in_EDX) = cVar1;
      cVar1 = *(char *)(iVar7 + 2 + param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar3 + 2 + in_EDX) = 0;
        return;
      }
      *(char *)(iVar3 + 2 + in_EDX) = cVar1;
      cVar1 = *(char *)(iVar7 + 3 + param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar3 + 3 + in_EDX) = 0;
        return;
      }
      *(char *)(iVar3 + 3 + in_EDX) = cVar1;
      cVar1 = *(char *)(iVar7 + 4 + param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar3 + 4 + in_EDX) = 0;
        return;
      }
      *(char *)(iVar3 + 4 + in_EDX) = cVar1;
      iVar7 = iVar7 + 5;
      iVar3 = iVar3 + 5;
      if (0xc2 < iVar7) {
        *(undefined1 *)(iVar3 + in_EDX) = 0;
        return;
      }
    }
  }
  *(undefined1 *)(iVar3 + in_EDX) = 0;
  return;
}

