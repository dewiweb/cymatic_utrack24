// rea decompile_all
// name: FUN_004e5d40
// address: 0x4e5d40
// body: available
// range: 0x4e5d40-0x4e5ecc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e5d40(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007047ec;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = PolySampleBuffer::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_8 = 1;
  uVar3 = FUN_004bfe22(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),uVar2);
  in_ECX[5] = uVar3;
  local_14 = 0;
  if (0 < (int)param_3) {
    do {
      puVar4 = operator_new(0x10);
      local_8._0_1_ = 2;
      puVar4[1] = param_2;
      *puVar4 = param_1;
      uVar2 = FUN_004bfe22(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
      puVar4[2] = uVar2;
      puVar5 = (uint *)FUN_004bfe22(4);
      puVar4[3] = (uint)puVar5;
      local_8 = CONCAT31(local_8._1_3_,1);
      *puVar5 = puVar4[2];
      _memset((void *)puVar4[2],0,*puVar4 << 2);
      iVar1 = in_ECX[4];
      iVar6 = iVar1 + 1;
      if ((int)in_ECX[3] < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar1 + 2;
        }
        uVar2 = iVar1 + 9 + (iVar6 >> 1) & 0xfffffff8;
        if (in_ECX[3] != uVar2) {
          if ((int)uVar2 < 1) {
            FID_conflict__free((void *)in_ECX[2]);
            in_ECX[2] = 0;
          }
          else if (in_ECX[2] == 0) {
            uVar3 = FUN_004c554b();
            in_ECX[2] = uVar3;
          }
          else {
            uVar3 = FUN_004c553b(in_ECX[2],uVar2 * 4);
            in_ECX[2] = uVar3;
          }
          in_ECX[3] = uVar2;
        }
      }
      iVar1 = in_ECX[4];
      in_ECX[4] = iVar1 + 1;
      *(uint **)(in_ECX[2] + iVar1 * 4) = puVar4;
      *(uint *)(in_ECX[5] + local_14 * 4) = puVar4[2];
      local_14 = local_14 + 1;
    } while (local_14 < (int)param_3);
  }
  ExceptionList = local_10;
  return;
}

