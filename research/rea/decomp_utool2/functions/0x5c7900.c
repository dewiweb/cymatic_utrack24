// rea decompile_all
// name: FUN_005c7900
// address: 0x5c7900
// body: available
// range: 0x5c7900-0x5c79ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7900(char *param_1)

{
  int iVar1;
  DWORD DVar2;
  char *pcVar3;
  DWORD *pDVar4;
  MMRESULT MVar5;
  int in_ECX;
  int iVar6;
  midihdr_tag local_50;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x40);
  DVar2 = *(DWORD *)(param_1 + 0x10);
  if ((int)DVar2 < 4) {
    pcVar3 = param_1;
    if (4 < (int)DVar2) {
      pcVar3 = *(char **)param_1;
    }
    if (*pcVar3 != -0x10) {
      iVar6 = 0;
      while( true ) {
        pDVar4 = (DWORD *)FUN_00424f50();
        MVar5 = midiOutShortMsg(*(HMIDIOUT *)(iVar1 + 8),*pDVar4);
        if (MVar5 != 0x43) break;
        Sleep(1);
        iVar6 = iVar6 + 1;
        if (0x31 < iVar6) {
          __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      goto LAB_005c79ed;
    }
  }
  _memset(&local_50.dwBufferLength,0,0x3c);
  if (4 < (int)DVar2) {
    param_1 = *(char **)param_1;
  }
  local_50.lpData = param_1;
  local_50.dwBufferLength = DVar2;
  local_50.dwBytesRecorded = DVar2;
  MVar5 = midiOutPrepareHeader(*(HMIDIOUT *)(iVar1 + 8),&local_50,0x40);
  if ((MVar5 == 0) && (MVar5 = midiOutLongMsg(*(HMIDIOUT *)(iVar1 + 8),&local_50,0x40), MVar5 == 0))
  {
    while (((byte)local_50.dwFlags & 1) == 0) {
      Sleep(1);
    }
    iVar6 = 499;
    do {
      MVar5 = midiOutUnprepareHeader(*(HMIDIOUT *)(iVar1 + 8),&local_50,0x40);
      if (MVar5 != 0x41) break;
      Sleep(2);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
LAB_005c79ed:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

