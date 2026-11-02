// rea decompile_all
// name: FUN_000d7300
// address: 0xd7300
// body: available
// range: 0xd7300-0xd74cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000d7300(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [8];
  int local_60;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_44;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  int iStack_1c;
  undefined4 local_18;
  
  iStack_1c = param_1;
  local_18 = param_2;
  iVar2 = FUN_0016deb0(param_2,DAT_000d74d0,DAT_000d74cc,0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x4c) != puVar6) {
    do {
      uVar7 = *puVar6;
      uVar3 = FUN_0015727c(uVar7);
      uVar4 = FUN_00159a08(local_18);
      iVar2 = FUN_00160a14(uVar3,uVar4);
      if (iVar2 != 0) {
        uVar3 = FUN_0008054c(uVar7,local_18);
        return uVar3;
      }
      puVar6 = puVar6 + 1;
    } while (*(undefined4 **)(param_1 + 0x4c) != puVar6);
  }
  uVar3 = FUN_00159a08(local_18);
  FUN_000a59b0(auStack_68,uVar3);
  piVar1 = DAT_000d74d4;
  iVar2 = local_60;
  if (local_60 == 0) {
    iVar2 = *DAT_000d74d4;
  }
  iVar2 = FUN_001803c0(*(undefined4 *)(param_1 + 0x54),iVar2);
  if (iVar2 != 0) {
    iVar2 = local_60;
    if (local_60 == 0) {
      iVar2 = *piVar1;
    }
    iVar2 = FUN_00181268(*(undefined4 *)(param_1 + 0x54),iVar2);
    uVar3 = DAT_000d74d8;
    local_50 = DAT_000d74d8;
    local_4c = 0;
    if (iVar2 != 0) {
      local_54 = FUN_001a0808(iVar2 + 1,1);
      if (local_60 == 0) {
        local_60 = *piVar1;
      }
      FUN_00180f0c(*(undefined4 *)(param_1 + 0x54),local_60,local_54,iVar2 + 1);
      iVar2 = local_54;
      if (local_4c != local_54) {
        FUN_0019f30c();
        local_4c = iVar2;
      }
    }
    iVar5 = FUN_001a0808(0x54,1);
    iVar2 = 0;
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)FUN_0007819c();
      *puVar6 = DAT_000d74dc;
      puVar6[9] = DAT_000d74e0;
      puVar6 = (undefined4 *)FUN_00051ca8(puVar6 + 10);
      uVar4 = DAT_000d74e4;
      *(undefined1 *)(puVar6 + 7) = 0;
      *puVar6 = uVar4;
      iVar5 = FUN_00065c88(puVar6 + 8,&local_50);
      *(undefined4 *)(iVar5 + -0x20) = DAT_000d74e8;
      iVar2 = iVar5 + -0x48;
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    local_54 = iVar2;
    uVar4 = FUN_00159a08(local_18);
    iVar2 = FUN_00078190(local_54,uVar4);
    if (iVar2 == 0) {
      FUN_0007ac40(local_54);
      local_50 = uVar3;
      FUN_0019f30c(local_4c);
    }
    else {
      FUN_000e1de8(auStack_3c,param_1);
      uVar4 = FUN_000e1e1c(auStack_30,auStack_3c);
      iVar2 = FUN_00078170(local_54,uVar4);
      FUN_000e1e40(auStack_30);
      if (((iVar2 == 1) && (iVar2 = FUN_000d7140(param_1,local_54), iVar2 != 0)) &&
         (puVar6 = *(undefined4 **)(param_1 + 0x48), *(undefined4 **)(param_1 + 0x4c) != puVar6)) {
        do {
          uVar7 = *puVar6;
          local_44 = FUN_0015727c(uVar7);
          uVar4 = FUN_00159a08(local_18);
          iVar2 = FUN_00160a14(local_44,uVar4);
          if (iVar2 != 0) {
            iVar2 = FUN_0008054c(uVar7,local_18);
            if (iVar2 != 0) {
              FUN_000e1e40(auStack_3c);
              local_50 = uVar3;
              FUN_0019f30c(local_4c);
              FUN_001bbf6c(auStack_68);
              return 1;
            }
            break;
          }
          puVar6 = puVar6 + 1;
        } while (*(undefined4 **)(param_1 + 0x4c) != puVar6);
      }
      FUN_0007ac40(local_54);
      FUN_000e1e40(auStack_3c);
      local_50 = uVar3;
      FUN_0019f30c(local_4c);
    }
  }
  FUN_001bbf6c(auStack_68);
  return 0;
}

