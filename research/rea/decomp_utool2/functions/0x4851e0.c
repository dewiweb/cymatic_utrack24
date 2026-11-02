// rea decompile_all
// name: FUN_004851e0
// address: 0x4851e0
// body: available
// range: 0x4851e0-0x4852ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004851e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  byte *_Dst;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  int local_2c;
  byte bStack_25;
  int local_18;
  int local_14;
  size_t local_10;
  int local_c;
  
  piVar1 = (int *)*in_ECX;
  iVar6 = piVar1[2] * 0x10 + *piVar1;
  local_2c = *piVar1;
  if (local_2c != iVar6) {
    do {
      FUN_0044db90(&local_18,in_ECX + 1);
      if ((0 < (int)local_10) && (0 < local_c)) {
        iVar5 = local_c + local_14;
        sVar7 = local_10;
        for (iVar4 = local_14; iVar4 < iVar5; iVar4 = iVar4 + 1) {
          piVar1 = (int *)*param_1;
          iVar3 = *piVar1 + piVar1[2] * iVar4;
          param_1[1] = iVar3;
          iVar2 = piVar1[3];
          _Dst = (byte *)(iVar2 * local_18 + iVar3);
          bStack_25 = (byte)((uint)param_1[2] >> 0x18);
          if (*(char *)((int)param_1 + 0xb) == -1) {
            sVar8 = sVar7;
            if (iVar2 == 1) {
              _memset(_Dst,(uint)param_1[2] >> 0x18,sVar7);
            }
            else {
              do {
                *_Dst = bStack_25;
                sVar7 = sVar7 - 1;
                _Dst = _Dst + iVar2;
              } while (0 < (int)sVar7);
            }
          }
          else {
            do {
              sVar7 = sVar7 - 1;
              *_Dst = (char)((uint)*_Dst * (0x100 - (uint)bStack_25) >> 8) + bStack_25;
              _Dst = _Dst + iVar2;
              sVar8 = local_10;
            } while (0 < (int)sVar7);
          }
          sVar7 = sVar8;
        }
      }
      local_2c = local_2c + 0x10;
    } while (local_2c != iVar6);
  }
  return;
}

