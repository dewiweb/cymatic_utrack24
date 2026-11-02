// rea decompile_all
// name: FUN_00610890
// address: 0x610890
// body: available
// range: 0x610890-0x6109e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00610890(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_ECX;
  uint uVar7;
  
  FUN_006310b0(in_ECX);
  uVar7 = *(uint *)(param_1 + 0x2c);
joined_r0x006108aa:
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 0) {
      iVar4 = *(int *)(param_1 + 0x2c) + 1;
      if (((int)*(uint *)(param_1 + 0x28) < iVar4) &&
         (uVar7 = *(int *)(param_1 + 0x2c) + 9 + iVar4 / 2 & 0xfffffff8,
         *(uint *)(param_1 + 0x28) != uVar7)) {
        if ((int)uVar7 < 1) {
          FID_conflict__free(*(void **)(param_1 + 0x24));
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
        else if (*(int *)(param_1 + 0x24) == 0) {
          uVar6 = FUN_004c554b();
          *(undefined4 *)(param_1 + 0x24) = uVar6;
        }
        else {
          uVar6 = FUN_004c553b(*(int *)(param_1 + 0x24),uVar7 * 4);
          *(undefined4 *)(param_1 + 0x24) = uVar6;
        }
        *(uint *)(param_1 + 0x28) = uVar7;
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = iVar4 + 1;
      *(int *)(*(int *)(param_1 + 0x24) + iVar4 * 4) = param_2;
      if (param_2 != 0) {
        LOCK();
        *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
        UNLOCK();
      }
      return param_1;
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x24) + uVar7 * 4);
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + uVar7 * 4) + 8) != *(int *)(param_2 + 8)) {
      do {
        iVar4 = FUN_00443260();
        iVar5 = FUN_00443260();
        if ((iVar4 - iVar5 != 0) && ((iVar4 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff))
        goto joined_r0x006108aa;
      } while (iVar4 != 0);
    }
    if (uVar7 < *(uint *)(param_1 + 0x2c)) {
      puVar3 = (undefined4 *)*piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar3 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      iVar4 = *(int *)(param_1 + 0x2c) - uVar7;
      if (0 < iVar4) {
        FUN_004c1df0(piVar2,piVar2 + 1,iVar4 * 4);
      }
      iVar4 = *(int *)(param_1 + 0x2c);
      if ((iVar4 * 2 < *(int *)(param_1 + 0x28)) && (iVar4 < *(int *)(param_1 + 0x28))) {
        FUN_00409cf0(iVar4);
      }
    }
  } while( true );
}

