// rea decompile_all
// name: FUN_004ec4f0
// address: 0x4ec4f0
// body: available
// range: 0x4ec4f0-0x4ec5d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec4f0(uint param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  double in_XMM0_Qa;
  float fVar6;
  
  if (param_4 != 0 || param_5 != 0) {
    DVar3 = timeGetTime();
    if ((DAT_00c8a644 <= DVar3) || (DVar3 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar3;
    }
    iVar5 = DVar3 - *(int *)(in_ECX + 0x98);
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xb0));
    uVar1 = *param_3;
    *param_3 = *param_3 + param_1;
    param_3[1] = param_3[1] + param_2 + (uint)CARRY4(uVar1,param_1);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xb0));
    iVar4 = __aulldiv(uVar1,uVar2,param_4,param_5);
    if (100 < iVar4) {
      iVar4 = 100;
    }
    if (*(int *)(param_6 + iVar4 * 4) == 0) {
      *(int *)(param_6 + iVar4 * 4) = iVar5;
      iVar5 = iVar5 - *(int *)(param_6 + -4 + iVar4 * 4);
      if (iVar5 != 0) {
        FUN_006f56f0();
        fVar6 = ((float)in_XMM0_Qa * 1000.0) /
                (float)((double)iVar5 + (double)(&DAT_00c24bb0)[-(iVar5 >> 0x1f)]);
        *(float *)(param_7 + -4 + iVar4 * 4) = fVar6;
        if (*param_8 <= fVar6 && fVar6 != *param_8) {
          *param_8 = fVar6;
        }
      }
    }
  }
  return;
}

