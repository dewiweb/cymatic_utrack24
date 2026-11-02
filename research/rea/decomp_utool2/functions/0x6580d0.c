// rea decompile_all
// name: FUN_006580d0
// address: 0x6580d0
// body: available
// range: 0x6580d0-0x6582b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006580d0(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char local_f0 [204];
  char local_24 [24];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_EDX != 0) {
    *(ushort *)(in_EDX + 0x4a) = *(ushort *)(in_EDX + 0x4a) | 0x8000;
  }
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    if (0xc2 < uVar5) break;
    local_f0[uVar5] = "profile \'"[uVar5];
    uVar4 = uVar5 + 1;
    iVar6 = uVar5 + 1;
    uVar5 = uVar4;
  } while ("profile \'"[iVar6] != '\0');
  local_f0[uVar4] = '\0';
  uVar5 = uVar4;
  if (uVar4 < uVar4 + 0x4f) {
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      do {
        if (uVar4 + 0x4e <= uVar5) break;
        local_f0[uVar5] = param_1[uVar5 - uVar4];
        uVar5 = uVar5 + 1;
      } while (param_1[uVar5 - uVar4] != '\0');
    }
    local_f0[uVar5] = '\0';
  }
  uVar4 = uVar5;
  if (uVar5 < 0xc4) {
    do {
      if (0xc2 < uVar4) break;
      local_f0[uVar4] = (&DAT_00c02df8)[uVar4 - uVar5];
      uVar4 = uVar4 + 1;
    } while ((&DAT_00c02df8)[uVar4 - uVar5] != '\0');
    local_f0[uVar4] = '\0';
  }
  uVar7 = FUN_006582c0();
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    iVar6 = 0;
    local_24[0x17] = 0;
    pcVar3 = local_24 + 0x17;
    do {
      if ((uVar5 == 0) && (0 < iVar6)) break;
      pcVar3 = pcVar3 + -1;
      uVar2 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      iVar6 = iVar6 + 1;
      *pcVar3 = "0123456789ABCDEF"[uVar2];
    } while (local_24 < pcVar3);
    if (uVar4 < 0xc4) {
      cVar1 = *pcVar3;
      uVar5 = uVar4;
      while ((cVar1 != '\0' && (uVar5 < 0xc3))) {
        local_f0[uVar5] = pcVar3[uVar5 - uVar4];
        uVar5 = uVar5 + 1;
        cVar1 = pcVar3[uVar5 - uVar4];
      }
      local_f0[uVar5] = '\0';
      uVar4 = uVar5;
      if (uVar5 < 0xc4) {
        do {
          if (0xc2 < uVar4) break;
          local_f0[uVar4] = (&DAT_00c02ee8)[uVar4 - uVar5];
          uVar4 = uVar4 + 1;
        } while ((&DAT_00c02ee8)[uVar4 - uVar5] != '\0');
        local_f0[uVar4] = '\0';
      }
    }
  }
  else {
    FUN_00658390();
    (local_f0 + uVar4 + 6)[0] = ':';
    (local_f0 + uVar4 + 6)[1] = ' ';
    uVar4 = uVar4 + 8;
  }
  if (uVar4 < 0xc4) {
    uVar5 = uVar4;
    if (param_3 != (char *)0x0) {
      cVar1 = *param_3;
      while ((cVar1 != '\0' && (uVar5 < 0xc3))) {
        local_f0[uVar5] = param_3[uVar5 - uVar4];
        uVar5 = uVar5 + 1;
        cVar1 = param_3[uVar5 - uVar4];
      }
    }
    local_f0[uVar5] = '\0';
  }
  FUN_00655f30((in_EDX != 0) + '\x01');
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

