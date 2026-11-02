// rea decompile_all
// name: FUN_004b4950
// address: 0x4b4950
// body: available
// range: 0x4b4950-0x4b4b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004b4b08) */
/* WARNING: Removing unreachable block (ram,0x004b4b10) */
/* WARNING: Removing unreachable block (ram,0x004b4b1b) */
/* WARNING: Removing unreachable block (ram,0x004b4b25) */
/* WARNING: Removing unreachable block (ram,0x004b4b2b) */
/* WARNING: Removing unreachable block (ram,0x004b4b4c) */
/* WARNING: Removing unreachable block (ram,0x004b4b56) */

void FUN_004b4950(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 float param_5,int param_6,int param_7,float param_8)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *in_ECX;
  byte *pbVar5;
  int *_Memory;
  int iVar6;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00703e85;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_8 = 0;
  local_14 = 0;
  if (0 < in_ECX[2]) {
    local_18 = 0;
    local_1c = in_ECX;
    do {
      if (param_4 < (float)iVar6 * param_8 + param_5) break;
      local_28 = *local_1c + local_18;
      FUN_006ed040(local_20,*(undefined4 *)(local_28 + 8));
      local_8._0_1_ = 1;
      puVar4 = (undefined4 *)FUN_006208e0(&local_24,&DAT_00c129a8);
      local_8._0_1_ = 3;
      FUN_00636ec0(puVar4);
      pbVar5 = (byte *)*puVar4;
      do {
        while( true ) {
          bVar3 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (-1 < (char)bVar3) break;
          bVar3 = *pbVar5;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar1 = pbVar5 + 1;
            pbVar5 = pbVar5 + 1;
            bVar3 = *pbVar1;
          }
        }
      } while (bVar3 != 0);
      FUN_00644f50(param_3,local_20);
      local_8 = (uint)local_8._1_3_ << 8;
      _Memory = (int *)(local_24 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar2 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      local_18 = local_18 + 0xc;
      iVar6 = iVar6 + *(int *)(local_28 + 4);
      local_14 = local_14 + 1;
    } while (local_14 < local_1c[2]);
  }
  local_3c = param_5;
  local_38 = (float)param_6;
  local_34 = (float)iVar6 * param_8 + 10.0;
  local_30 = (float)param_7;
  FUN_006807b0(param_2,&local_3c);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

