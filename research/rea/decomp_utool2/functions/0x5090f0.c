// rea decompile_all
// name: FUN_005090f0
// address: 0x5090f0
// body: available
// range: 0x5090f0-0x5092ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005090f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070827d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 0x11c);
  FUN_00407fe0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (*(int *)(in_ECX + 0x120) != 0) {
    FID_conflict__free((void *)*piVar1);
    *piVar1 = 0;
    *(undefined4 *)(in_ECX + 0x120) = 0;
  }
  *(undefined4 *)(in_ECX + 0x124) = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      operator_new(0x90);
      local_8 = 0;
      piVar2 = (int *)FUN_00508d90();
      local_8 = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x28))(1);
        iVar5 = -1;
        if (piVar2[3] != in_ECX) {
          if (piVar2[3] == 0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(piVar2);
          }
          piVar2[3] = in_ECX;
          if ((*(byte *)(piVar2 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar2 + 0x69) & 1) == 0) &&
             (iVar5 = *(int *)(in_ECX + 0x30), 0 < iVar5)) {
            piVar3 = (int *)(*(int *)(in_ECX + 0x28) + (iVar5 + -1) * 4);
            do {
              if ((*(byte *)(*piVar3 + 0x69) & 1) == 0) break;
              iVar5 = iVar5 + -1;
              piVar3 = piVar3 + -1;
            } while (0 < iVar5);
          }
          FUN_00410380(iVar5,piVar2);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      iVar5 = *(int *)(in_ECX + 0x124);
      iVar4 = iVar5 + 1;
      if ((int)*(uint *)(in_ECX + 0x120) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar5 + 2;
        }
        uVar6 = iVar5 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x120) != uVar6) {
          if ((int)uVar6 < 1) {
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else if (*piVar1 == 0) {
            iVar5 = FUN_004c554b();
            *piVar1 = iVar5;
          }
          else {
            iVar5 = FUN_004c553b(*piVar1,uVar6 * 4);
            *piVar1 = iVar5;
          }
          *(uint *)(in_ECX + 0x120) = uVar6;
        }
      }
      iVar5 = *(int *)(in_ECX + 0x124);
      local_18 = local_18 + 1;
      *(int *)(in_ECX + 0x124) = iVar5 + 1;
      *(int **)(*piVar1 + iVar5 * 4) = piVar2;
    } while (local_18 < *(int *)(param_1 + 8));
  }
  FUN_00509710();
  ExceptionList = local_10;
  return;
}

