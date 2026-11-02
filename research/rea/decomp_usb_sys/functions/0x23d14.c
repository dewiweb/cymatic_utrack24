// rea decompile_all
// name: FUN_00023d14
// address: 0x23d14
// body: available
// range: 0x23d14-0x23fb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00023d14(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                 longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  char *pcVar8;
  undefined1 auStackY_108 [32];
  longlong local_d8;
  char local_d0 [40];
  char local_a8 [40];
  char local_80 [40];
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_00029100 ^ (ulonglong)auStackY_108;
  uVar4 = FUN_000117c0(local_d0,"BCo #$D ",0x28);
  FUN_000117c0(local_d0 + uVar4,"$N",0x28 - uVar4);
  FUN_000117c0(local_a8,local_d0,0x28);
  local_d8 = 0;
  iVar5 = FUN_000232d4(param_3,&local_d8);
  if (-1 < iVar5) {
    FUN_000115bc(&local_d8,L"SoundDeviceName",local_a8,0x28,local_d0);
  }
  if (local_d8 != 0) {
    ZwClose();
  }
  if (param_4 != 0) {
    FUN_000117c0(local_d0,(char *)(param_4 + 0xc4),0x28);
    pcVar8 = local_d0;
    while (local_d0[0] != '\0') {
      if ((*pcVar8 == ' ') || (*pcVar8 == '\t')) {
        *pcVar8 = '\0';
        break;
      }
      pcVar8 = pcVar8 + 1;
      local_d0[0] = *pcVar8;
    }
    lVar6 = -1;
    pcVar8 = local_d0;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    if (lVar6 != -2) {
      pcVar8 = local_d0;
      goto LAB_00023e8e;
    }
  }
  iVar5 = *(int *)(param_3 + 0x18);
  pcVar8 = "Unknown";
  if (iVar5 == 1) {
    pcVar8 = "PCM Mono";
    goto LAB_00023e8e;
  }
  if (iVar5 != 2) {
    if (iVar5 == 3) {
      pcVar8 = "PCM MultiChan";
      goto LAB_00023e8e;
    }
    if (iVar5 == 100) {
      pcVar8 = "PCM/SPDIF";
      goto LAB_00023e8e;
    }
    if (iVar5 != 0x65) {
      if (iVar5 == 200) {
        pcVar8 = "MIDI";
      }
      goto LAB_00023e8e;
    }
  }
  pcVar8 = "PCM Stereo";
LAB_00023e8e:
  FUN_000117f4(local_80,0x28,local_a8,'N',pcVar8);
  FUN_000117c0(local_a8,local_80,0x28);
  FUN_000117f4(local_80,0x28,local_a8,'D',(char *)(param_2 + 0x1a14));
  FUN_000117c0(local_a8,local_80,0x28);
  sprintf(local_58,"%u");
  FUN_000117f4(local_80,0x28,local_a8,'I',local_58);
  pcVar8 = local_80;
  psVar7 = (short *)(param_5 + 0x44);
  for (uVar4 = 0; (local_80[0] != '\0' && (uVar4 < 0x27)); uVar4 = uVar4 + 1) {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    *psVar7 = (short)cVar2;
    psVar7 = psVar7 + 1;
    local_80[0] = *pcVar8;
  }
  *psVar7 = 0;
  *(longlong *)(param_5 + 0x10) = param_2;
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = (longlong *)(param_5 + *(longlong *)(param_1 + 0x40));
  lVar6 = *plVar3;
  plVar1[1] = (longlong)plVar3;
  *plVar1 = lVar6;
  *(longlong **)(*plVar3 + 8) = plVar1;
  *plVar3 = (longlong)plVar1;
  FUN_00026110(local_40 ^ (ulonglong)auStackY_108);
  return;
}

