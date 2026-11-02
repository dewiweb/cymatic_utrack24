// rea decompile_all
// name: FUN_00022da8
// address: 0x22da8
// body: available
// range: 0x22da8-0x22fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022da8(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  char local_58 [16];
  char local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_00029100 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(param_1 + 0x18);
  pcVar7 = "Unknown";
  if (iVar4 == 1) {
    pcVar7 = "Line1C";
  }
  else if (iVar4 == 2) {
    pcVar7 = "Line2C";
  }
  else if (iVar4 == 3) {
    pcVar7 = "LineMC";
  }
  else if (iVar4 == 100) {
    pcVar7 = "SPDIF-TRAN";
  }
  else if (iVar4 == 0x65) {
    pcVar7 = "SPDIF-PCM";
  }
  else if (iVar4 == 200) {
    pcVar7 = "MIDI";
  }
  lVar8 = 0;
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)(param_1 + 0x30)) {
    lVar8 = (longlong)plVar2 - *(longlong *)(param_1 + 0x40);
  }
  pcVar6 = pcVar7;
  if (lVar8 != 0) {
    FUN_000117c0(local_48,(char *)(lVar8 + 0xc4),0x28);
    pcVar6 = local_48;
    while (local_48[0] != '\0') {
      if ((*pcVar6 == ' ') || (*pcVar6 == '\t')) {
        *pcVar6 = '\0';
        break;
      }
      pcVar6 = pcVar6 + 1;
      local_48[0] = *pcVar6;
    }
    lVar5 = -1;
    pcVar6 = local_48;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = local_48;
    if (lVar5 == -2) {
      pcVar6 = pcVar7;
    }
  }
  pcVar7 = "Out&";
  if (*(char *)(param_1 + 0x78) != '\0') {
    pcVar7 = "In&";
  }
  uVar3 = FUN_000117c0(param_2,pcVar7,0x50);
  iVar4 = FUN_000117c0(param_2 + uVar3,pcVar6,0x50 - uVar3);
  uVar3 = uVar3 + iVar4;
  iVar4 = FUN_000117c0(param_2 + uVar3,"&",0x50 - uVar3);
  if (lVar8 == 0) {
    pcVar7 = "XX";
  }
  else {
    sprintf(local_58,"%02u");
    pcVar7 = local_58;
  }
  FUN_000117c0(param_2 + (uVar3 + iVar4),pcVar7,0x50 - (uVar3 + iVar4));
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    if ((((*pcVar7 == ' ') || (*pcVar7 == '\t')) || (*pcVar7 == '\n')) || (*pcVar7 == '\r')) {
      *pcVar7 = '_';
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar7 == '\\') {
      *pcVar7 = '/';
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar7 == ';') {
      *pcVar7 = '_';
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  cVar1 = *param_2;
  pcVar7 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar7 == '\"') {
      *pcVar7 = '_';
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
  }
  pcVar7 = param_2;
  if (*param_2 != '\0') {
    do {
      if (*pcVar7 == '%') {
        *pcVar7 = '_';
      }
      pcVar7 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    for (; *param_2 != '\0'; param_2 = param_2 + 1) {
      if (*param_2 == '$') {
        *param_2 = '_';
      }
    }
  }
  FUN_00026110(local_20 ^ (ulonglong)auStack_78);
  return;
}

