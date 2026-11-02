// rea decompile_all
// name: FUN_0053e120
// address: 0x53e120
// body: available
// range: 0x53e120-0x53e333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053e120(int param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int iVar7;
  uint uVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e3b7;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = SongProject::vftable;
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  in_ECX[8] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puVar1 = in_ECX + 0x10;
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(in_ECX + 0xe) = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = &DAT_00bfe12c;
  iVar2 = *(int *)(param_1 + 100);
  in_ECX[0x19] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(undefined8 *)(in_ECX + 0x1a) = *(undefined8 *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x70);
  in_ECX[0x1c] = iVar2;
  piVar4 = (int *)(iVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(undefined1 *)(in_ECX + 0x1d) = *(undefined1 *)(param_1 + 0x74);
  in_ECX[0x1e] = 0;
  local_8 = 7;
  if ((param_2 == '\0') && (puVar1 != (undefined4 *)(param_1 + 0x40))) {
    FUN_00414760((undefined4 *)(param_1 + 0x40));
    _Memory = (void *)*puVar1;
    *puVar1 = local_20;
    in_ECX[0x11] = local_1c;
    in_ECX[0x12] = local_18;
    FID_conflict__free(_Memory);
  }
  _param_2 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      uVar5 = FUN_0053b3a0(uVar3);
      iVar2 = in_ECX[0x17];
      iVar7 = iVar2 + 1;
      if ((int)in_ECX[0x16] < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar2 + 2;
        }
        uVar8 = iVar2 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (in_ECX[0x16] != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free((void *)in_ECX[0x15]);
            in_ECX[0x15] = 0;
          }
          else if (in_ECX[0x15] == 0) {
            uVar6 = FUN_004c554b();
            in_ECX[0x15] = uVar6;
          }
          else {
            uVar6 = FUN_004c553b(in_ECX[0x15],uVar8 * 4);
            in_ECX[0x15] = uVar6;
          }
          in_ECX[0x16] = uVar8;
        }
      }
      iVar2 = in_ECX[0x17];
      in_ECX[0x17] = iVar2 + 1;
      *(undefined4 *)(in_ECX[0x15] + iVar2 * 4) = uVar5;
      _param_2 = _param_2 + 1;
    } while (_param_2 < *(int *)(param_1 + 0x5c));
  }
  ExceptionList = local_10;
  return;
}

