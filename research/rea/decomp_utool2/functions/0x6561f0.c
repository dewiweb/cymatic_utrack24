// rea decompile_all
// name: FUN_006561f0
// address: 0x6561f0
// body: available
// range: 0x6561f0-0x6562ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6562ec with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006561f0(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  int in_EDX;
  int iVar7;
  char cVar9;
  undefined4 uVar8;
  char *pcVar10;
  char local_c8 [192];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar10 = "keyword \"@1\": bad character \'0x@2\'";
  uVar5 = 0;
  do {
    cVar9 = *pcVar10;
    if (cVar9 == '\0') break;
    if (((in_EDX == 0) || (cVar9 != '@')) || (pcVar10[1] == '\0')) {
LAB_0065629c:
      local_c8[uVar5] = cVar9;
      uVar5 = uVar5 + 1;
    }
    else {
      bVar3 = pcVar10[1];
      pcVar10 = pcVar10 + 1;
      iVar7 = 0;
      if (bVar3 != 0x31) {
        uVar8 = CONCAT31((uint3)bVar3,0x31);
        do {
          if ((char)uVar8 == '\0') break;
          pbVar2 = &DAT_00c17c41 + iVar7;
          uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),*pbVar2);
          iVar7 = iVar7 + 1;
        } while (*pbVar2 != bVar3);
        cVar9 = (char)((uint)uVar8 >> 8);
        if (7 < iVar7) goto LAB_0065629c;
      }
      pcVar6 = (char *)(in_EDX + iVar7 * 0x20);
      pcVar1 = pcVar6 + 0x20;
      for (; ((uVar5 < 0xbf && (*pcVar6 != '\0')) && (pcVar6 < pcVar1)); pcVar6 = pcVar6 + 1) {
        local_c8[uVar5] = *pcVar6;
        uVar5 = uVar5 + 1;
      }
    }
    pcVar10 = pcVar10 + 1;
  } while (uVar5 < 0xbf);
  if (uVar5 < 0xc0) {
    local_c8[uVar5] = '\0';
    FUN_006563b0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

