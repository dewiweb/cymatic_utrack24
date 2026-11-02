// rea decompile_all
// name: _GetLocaleNameFromLanguage
// address: 0x4e0b29
// body: available
// range: 0x4e0b29-0x4e0b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _GetLocaleNameFromLanguage
   
   Library: Visual Studio 2015 Release */

void _GetLocaleNameFromLanguage(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  
  uVar4 = 2;
  psVar5 = (short *)*param_1;
  psVar1 = psVar5 + 1;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  uVar3 = (uint)((int)psVar5 - (int)psVar1 >> 1 == 3);
  param_1[4] = uVar3;
  if (uVar3 == 0) {
    uVar4 = _GetPrimaryLen(*param_1);
  }
  param_1[3] = uVar4;
  ___acrt_EnumSystemLocalesEx_16(FUN_004e0ea2,3,0,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    param_1[2] = 0;
  }
  return;
}

