// rea decompile_all
// name: FUN_00659740
// address: 0x659740
// body: available
// range: 0x659740-0x659891 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659740(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  char *in_EDX;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_EDX == (char *)0x0) {
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x20000;
  }
  else {
    pcVar3 = "1.6.1";
    do {
      cVar1 = *pcVar3;
      if ((in_EDX + -0xc02b90)[(int)pcVar3] != cVar1) {
        *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x20000;
      }
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  if (((*(uint *)(in_ECX + 0x2c) & 0x20000) == 0) ||
     ((((in_EDX != (char *)0x0 && (*in_EDX == '1')) && (in_EDX[2] == '6')) && (in_EDX[3] == '.'))))
  {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    if (0x7e < uVar5) break;
    local_8c[uVar5] = "Application built with libpng-"[uVar5];
    uVar4 = uVar5 + 1;
    iVar2 = uVar5 + 1;
    uVar5 = uVar4;
  } while ("Application built with libpng-"[iVar2] != '\0');
  local_8c[uVar4] = '\0';
  if (uVar4 < 0x80) {
    uVar5 = uVar4;
    if (in_EDX != (char *)0x0) {
      cVar1 = *in_EDX;
      while ((cVar1 != '\0' && (uVar5 < 0x7f))) {
        local_8c[uVar5] = in_EDX[uVar5 - uVar4];
        uVar5 = uVar5 + 1;
        cVar1 = in_EDX[uVar5 - uVar4];
      }
    }
    local_8c[uVar5] = '\0';
    if (uVar5 < 0x80) {
      uVar4 = uVar5;
      do {
        if (0x7e < uVar4) break;
        local_8c[uVar4] = " but running with "[uVar4 - uVar5];
        uVar4 = uVar4 + 1;
      } while (" but running with "[uVar4 - uVar5] != '\0');
      local_8c[uVar4] = '\0';
      if (uVar4 < 0x80) {
        uVar5 = uVar4;
        do {
          if (0x7e < uVar5) break;
          local_8c[uVar5] = (&DAT_00c02b90)[uVar5 - uVar4];
          uVar5 = uVar5 + 1;
        } while ((&DAT_00c02b90)[uVar5 - uVar4] != '\0');
        local_8c[uVar5] = '\0';
      }
    }
  }
  FUN_006563b0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

