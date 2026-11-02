// rea decompile_all
// name: FUN_000cd960
// address: 0xcd960
// body: available
// range: 0xcd960-0xcdbe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd960(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined2 local_60;
  undefined2 local_5e;
  int local_5c;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [8];
  int local_48;
  undefined4 local_40;
  int *local_3c;
  int *piStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar8 = *DAT_000cdbe8;
  uVar9 = DAT_000cdbe8[1];
  piStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  iVar3 = FUN_001da408(auStack_54,param_3);
  iVar3 = FUN_001da408(iVar3 + 4,param_3 + 4);
  *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(param_3 + 10);
  *(undefined4 *)(iVar3 + 8) = 0;
  uVar1 = *(ushort *)(iVar3 + 6);
  if (uVar1 != 0) {
    if (uVar1 < 5) {
      FUN_000037d0(iVar3 + 0xc,param_3 + 0x10,uVar1);
    }
    else {
      iVar5 = FUN_001a0808(uVar1,1);
      *(int *)(iVar3 + 8) = iVar5;
      if (iVar5 == 0) {
        *(undefined2 *)(iVar3 + 6) = 0;
      }
      else {
        FUN_00003628(iVar5,*(undefined4 *)(param_3 + 0xc),*(undefined2 *)(iVar3 + 6));
      }
    }
  }
  bVar2 = false;
  local_40 = 0;
  puVar4 = (undefined4 *)FUN_001a0808(0x28,1);
  if (puVar4 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    local_3c = param_1;
    iVar5 = FUN_001da408(auStack_68,iVar3 + -4);
    iVar5 = FUN_001da408(iVar5 + 4,iVar3);
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar3 + 4);
    *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(iVar3 + 6);
    *(undefined4 *)(iVar5 + 8) = 0;
    uVar1 = *(ushort *)(iVar5 + 6);
    if (uVar1 != 0) {
      if (uVar1 < 5) {
        FUN_000037d0(iVar5 + 0xc,iVar3 + 0xc,uVar1);
      }
      else {
        iVar6 = FUN_001a0808(uVar1,1);
        *(int *)(iVar5 + 8) = iVar6;
        if (iVar6 == 0) {
          *(undefined2 *)(iVar5 + 6) = 0;
        }
        else {
          FUN_00003628(iVar6,*(undefined4 *)(iVar3 + 8),*(undefined2 *)(iVar5 + 6));
        }
      }
    }
    *puVar4 = _DAT_000cdbec;
    puVar4[4] = param_4;
    puVar4[1] = local_3c;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    bVar2 = true;
    iVar3 = FUN_001da408(puVar4 + 5,auStack_68);
    iVar3 = FUN_001da408(iVar3 + 4,auStack_64);
    *(undefined2 *)(iVar3 + 4) = local_60;
    *(undefined2 *)(iVar3 + 6) = local_5e;
    *(undefined4 *)(iVar3 + 8) = 0;
    uVar1 = *(ushort *)(iVar3 + 6);
    if (uVar1 != 0) {
      if (uVar1 < 5) {
        FUN_000037d0(iVar3 + 0xc,auStack_58,uVar1);
      }
      else {
        iVar5 = FUN_001a0808(uVar1,1);
        *(int *)(iVar3 + 8) = iVar5;
        if (iVar5 == 0) {
          *(undefined2 *)(iVar3 + 6) = 0;
        }
        else {
          FUN_00003628(iVar5,local_5c,*(undefined2 *)(iVar3 + 6));
        }
      }
    }
    iVar3 = iVar3 + -0x18;
  }
  iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,iVar3,local_40);
  if (bVar2) {
    if (local_5c != 0) {
      FUN_0019f30c();
    }
    iVar5 = FUN_001da44c(auStack_64);
    FUN_001da44c(iVar5 + -4);
  }
  if (local_48 != 0) {
    FUN_0019f30c();
  }
  iVar5 = FUN_001da44c(auStack_50);
  FUN_001da44c(iVar5 + -4);
  if (iVar3 != 1) {
    thunk_FUN_000028a4(s___ERROR__ARCApplicationInterface_000cdbee + 2);
  }
  FUN_000d4b70(param_1,param_4);
  piVar7 = (int *)FUN_0006a6e4();
  (**(code **)(*piVar7 + 0x18))(piVar7,local_30);
  return;
}

