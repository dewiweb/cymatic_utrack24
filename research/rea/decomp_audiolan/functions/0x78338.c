// rea decompile_all
// name: FUN_00078338
// address: 0x78338
// body: available
// range: 0x78338-0x7859f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00078338(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined2 local_5c;
  undefined2 local_5a;
  int local_58;
  undefined1 auStack_54 [4];
  undefined4 local_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [8];
  int local_3c;
  
  uVar8 = *(undefined4 *)(DAT_000785a0 + 8);
  uVar3 = *(undefined4 *)(DAT_000785a0 + 0xc);
  iVar4 = FUN_001da408(auStack_48,param_3);
  iVar4 = FUN_001da408(iVar4 + 4,param_3 + 4);
  *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(param_3 + 8);
  *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(param_3 + 10);
  *(undefined4 *)(iVar4 + 8) = 0;
  uVar1 = *(ushort *)(iVar4 + 6);
  if (uVar1 != 0) {
    if (uVar1 < 5) {
      FUN_000037d0(iVar4 + 0xc,param_3 + 0x10,uVar1);
    }
    else {
      iVar6 = FUN_001a0808(uVar1,1);
      *(int *)(iVar4 + 8) = iVar6;
      if (iVar6 == 0) {
        *(undefined2 *)(iVar4 + 6) = 0;
      }
      else {
        FUN_00003628(iVar6,*(undefined4 *)(param_3 + 0xc),*(undefined2 *)(iVar4 + 6));
      }
    }
  }
  bVar2 = false;
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_001a0808(0x2c,1);
  if (puVar5 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar6 = FUN_001da408(auStack_64,iVar4 + -4);
    iVar6 = FUN_001da408(iVar6 + 4,iVar4);
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(iVar4 + 4);
    *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(iVar4 + 6);
    *(undefined4 *)(iVar6 + 8) = 0;
    uVar1 = *(ushort *)(iVar6 + 6);
    if (uVar1 != 0) {
      if (uVar1 < 5) {
        FUN_000037d0(iVar6 + 0xc,iVar4 + 0xc,uVar1);
      }
      else {
        iVar7 = FUN_001a0808(uVar1,1);
        *(int *)(iVar6 + 8) = iVar7;
        if (iVar7 == 0) {
          *(undefined2 *)(iVar6 + 6) = 0;
        }
        else {
          FUN_00003628(iVar7,*(undefined4 *)(iVar4 + 8),*(undefined2 *)(iVar6 + 6));
        }
      }
    }
    *puVar5 = DAT_000785a4;
    puVar5[1] = param_1;
    puVar5[4] = param_2;
    puVar5[2] = uVar8;
    puVar5[3] = uVar3;
    bVar2 = true;
    iVar4 = FUN_001da408(puVar5 + 5,auStack_64);
    iVar6 = FUN_001da408(iVar4 + 4,auStack_60);
    *(undefined2 *)(iVar6 + 4) = local_5c;
    *(undefined2 *)(iVar6 + 6) = local_5a;
    *(undefined4 *)(iVar6 + 8) = 0;
    uVar1 = *(ushort *)(iVar6 + 6);
    if (uVar1 != 0) {
      if (uVar1 < 5) {
        FUN_000037d0(iVar6 + 0xc,auStack_54,uVar1);
      }
      else {
        iVar4 = FUN_001a0808(uVar1,1);
        *(int *)(iVar6 + 8) = iVar4;
        if (iVar4 == 0) {
          *(undefined2 *)(iVar6 + 6) = 0;
        }
        else {
          FUN_00003628(iVar4,local_58,*(undefined2 *)(iVar6 + 6));
        }
      }
    }
    iVar4 = iVar6 + -0x18;
    *(undefined4 *)(iVar6 + 0x10) = param_4;
  }
  (**(code **)(*param_1 + 0x2c))(param_1,iVar4,local_50);
  if (bVar2) {
    if (local_58 != 0) {
      FUN_0019f30c();
    }
    iVar4 = FUN_001da44c(auStack_60);
    FUN_001da44c(iVar4 + -4);
  }
  if (local_3c != 0) {
    FUN_0019f30c();
  }
  iVar4 = FUN_001da44c(auStack_44);
  FUN_001da44c(iVar4 + -4);
  return;
}

