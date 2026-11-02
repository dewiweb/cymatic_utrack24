// rea decompile_all
// name: FUN_004a1cc0
// address: 0x4a1cc0
// body: available
// range: 0x4a1cc0-0x4a1e3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004a1cc0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *in_ECX;
  int *piVar6;
  float in_XMM1_Da;
  float fVar7;
  void *local_24;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703390;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((float)in_ECX[4] < in_XMM1_Da) {
    piVar6 = (int *)in_ECX[6];
    iVar3 = *piVar6;
    fVar7 = in_XMM1_Da;
    local_14 = iVar3;
    FUN_0044ebd0(0);
    iVar2 = FUN_00426f70(uVar1);
    if (iVar2 != 0xd) {
      local_14 = iVar3;
      FUN_0044ebd0(0);
      iVar3 = FUN_00426f70(uVar1);
      if (iVar3 != 10) {
        if ((float)in_ECX[5] <= fVar7) {
          ExceptionList = local_10;
          return piVar6[2] + *in_ECX;
        }
        FUN_00682b70();
        local_8 = 0;
        uVar4 = FUN_0049fd60(&local_14,in_ECX[0xc]);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00642ff0(in_ECX[7],uVar4,0,0x501502f9,0);
        piVar6 = (int *)(local_14 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        iVar3 = 0;
        if (0 < local_1c) {
          pfVar5 = (float *)((int)local_24 + 0xc);
          do {
            if (in_XMM1_Da < (pfVar5[2] + *pfVar5 + *pfVar5) * 0.5) break;
            iVar3 = iVar3 + 1;
            pfVar5 = pfVar5 + 7;
          } while (iVar3 < local_1c);
        }
        iVar2 = *in_ECX;
        FUN_00471b00();
        FID_conflict__free(local_24);
        ExceptionList = local_10;
        return iVar2 + iVar3;
      }
    }
  }
  ExceptionList = local_10;
  return *in_ECX;
}

