// rea decompile_all
// name: FUN_00635720
// address: 0x635720
// body: available
// range: 0x635720-0x6358a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00635720(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  int *_Memory;
  byte *local_8;
  
  if (*param_1 != 0) {
LAB_00635741:
    FUN_0045d5d0(param_1);
    if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
      puVar6 = (undefined4 *)&DAT_00bfe12c;
    }
    else {
      puVar2 = (undefined4 *)FUN_004bfe22();
      puVar2[1] = ((int)local_8 - (int)param_1) + 4U & 0xfffffffc;
      puVar6 = puVar2 + 2;
      *puVar2 = 0;
      FUN_004c2c30(puVar6,param_1);
      *(undefined1 *)((int)puVar6 + ((int)local_8 - (int)param_1)) = 0;
    }
    iVar5 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar5) {
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = in_ECX[2] + 2;
      }
      uVar4 = (iVar3 >> 1) + 8 + iVar5 & 0xfffffff8;
      if (in_ECX[1] != uVar4) {
        if ((int)uVar4 < 1) {
          FID_conflict__free((void *)*in_ECX);
          *in_ECX = 0;
        }
        else if (*in_ECX == 0) {
          iVar5 = FUN_004c554b();
          *in_ECX = iVar5;
        }
        else {
          iVar5 = FUN_004c553b();
          *in_ECX = iVar5;
        }
        in_ECX[1] = uVar4;
      }
    }
    iVar5 = in_ECX[2];
    in_ECX[2] = iVar5 + 1;
    puVar2 = (undefined4 *)(*in_ECX + iVar5 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar6;
      puVar6 = (undefined4 *)&DAT_00bfe12c;
    }
    _Memory = puVar6 + -2;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar5 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    bVar1 = *local_8;
    if (bVar1 != 0) {
      param_1 = local_8 + 1;
      local_8 = param_1;
      if ((char)bVar1 < '\0') {
        uVar4 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            local_8 = param_1;
            if (uVar4 < 9) break;
            uVar4 = uVar4 >> 1;
            param_1 = param_1 + 1;
            local_8 = param_1;
          } while ((uVar4 & (int)(char)bVar1) != 0);
        }
      }
      goto LAB_00635741;
    }
  }
  return;
}

