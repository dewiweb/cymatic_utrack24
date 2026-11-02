// rea decompile_all
// name: FUN_0041cf60
// address: 0x41cf60
// body: available
// range: 0x41cf60-0x41d052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041cf60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int *_Memory;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar4) {
    local_8 = 0;
    do {
      local_c = (undefined4 *)FUN_0041d060(&local_10,local_8);
      iVar2 = in_ECX[2];
      iVar3 = iVar2 + 1;
      if (in_ECX[1] < iVar3) {
        if (iVar3 < 0) {
          iVar3 = iVar2 + 2;
        }
        uVar5 = iVar2 + 9 + (iVar3 >> 1) & 0xfffffff8;
        if (in_ECX[1] != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)*in_ECX);
            *in_ECX = 0;
          }
          else if (*in_ECX == 0) {
            iVar2 = FUN_004c554b();
            *in_ECX = iVar2;
          }
          else {
            iVar2 = FUN_004c553b(*in_ECX,uVar5 * 4);
            *in_ECX = iVar2;
          }
          in_ECX[1] = uVar5;
        }
      }
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      puVar1 = (undefined4 *)(*in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *local_c;
        *local_c = &DAT_00bfe12c;
      }
      local_8 = local_8 + 1;
      _Memory = (int *)(local_10 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar2 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return param_1;
}

