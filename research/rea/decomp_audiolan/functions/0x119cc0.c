// rea decompile_all
// name: FUN_00119cc0
// address: 0x119cc0
// body: available
// range: 0x119cc0-0x11a063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00119cc0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uStack_78;
  int iStack_74;
  uint uStack_70;
  undefined1 auStack_6c [8];
  uint uStack_64;
  undefined1 auStack_60 [8];
  uint uStack_58;
  undefined1 auStack_54 [8];
  uint uStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  
  iVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
  uVar5 = DAT_0011a064;
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if ((*(ushort *)(param_2 + 4) != DAT_0011a064) &&
       ((**(code **)(*param_1 + 0x48))(&uStack_78,param_1),
       (uint)*(ushort *)(param_2 + 4) != (uStack_78 & uVar5))) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 6) != uVar5) &&
       ((**(code **)(*param_1 + 0x48))(&uStack_78,param_1),
       (uint)*(ushort *)(param_2 + 6) != uStack_78 >> 0x10)) {
      return 0;
    }
    if ((*(int *)(param_2 + 8) != -1) &&
       ((**(code **)(*param_1 + 0x48))(&uStack_78,param_1), *(int *)(param_2 + 8) != iStack_74)) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 0xc) != uVar5) &&
       ((**(code **)(*param_1 + 0x48))(&uStack_78,param_1),
       (uint)*(ushort *)(param_2 + 0xc) != (uStack_70 & 0xffff))) {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0x48))(auStack_54,param_1);
      uStack_4c = uStack_4c & 0xffff;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*param_1 + 0x48))(auStack_3c,param_1);
      FUN_0015e8b8(auStack_48,auStack_3c);
      uStack_4c = FUN_0015ea44(auStack_48,param_2 + 4);
    }
    else {
      if (cVar1 != '\x03') {
        return 0;
      }
      (**(code **)(*param_1 + 0x54))(auStack_30,param_1);
      uStack_4c = FUN_0015ea44(auStack_30,param_2 + 4);
    }
    if (uStack_4c != 0) {
      return 0;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x54);
  if ((uVar5 == 0xffffffff) ||
     (uVar3 = (**(code **)(*param_1 + 0x70))(param_1), uVar5 == (uVar3 & DAT_0011a068))) {
    uVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    uVar6 = *(uint *)(param_2 + 0x4c);
    uVar3 = *(uint *)(param_2 + 0x50);
    bVar9 = uVar6 != 0xffffffff;
    if (bVar9) {
      uVar6 = uVar6 & 0xf0ffffff;
    }
    if (bVar9) {
      uVar6 = uVar6 & 0xff00ffff;
    }
    bVar9 = uVar3 != 0xffffffff;
    if (bVar9) {
      uVar3 = uVar3 & 0xf0ffffff;
    }
    if (bVar9) {
      uVar3 = uVar3 & 0xff00ffff;
    }
    (**(code **)(*param_1 + 0x48))(auStack_6c,param_1);
    if (((uint)*(ushort *)(param_2 + 0x58) <= (uStack_64 & 0xffff)) &&
       ((**(code **)(*param_1 + 0x48))(auStack_60,param_1),
       (uStack_58 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x5a))) {
      uVar7 = *(undefined4 *)(param_2 + 0x1c);
      uVar8 = *(undefined4 *)(param_2 + 0x20);
      uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
      iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
      if (iVar2 != 0) {
        uVar7 = *(undefined4 *)(param_2 + 0x24);
        uVar8 = *(undefined4 *)(param_2 + 0x28);
        uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
        iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
        if (iVar2 != 0) {
          uVar7 = *(undefined4 *)(param_2 + 0x2c);
          uVar8 = *(undefined4 *)(param_2 + 0x30);
          uVar4 = (**(code **)(*param_1 + 0x5c))(param_1);
          iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
          if (iVar2 != 0) {
            uVar7 = *(undefined4 *)(param_2 + 0x34);
            uVar8 = *(undefined4 *)(param_2 + 0x38);
            uVar4 = (**(code **)(*param_1 + 100))(param_1);
            iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
            if (iVar2 != 0) {
              uVar7 = *(undefined4 *)(param_2 + 0x3c);
              uVar8 = *(undefined4 *)(param_2 + 0x40);
              uVar4 = (**(code **)(*param_1 + 0x6c))(param_1);
              iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
              if (iVar2 != 0) {
                uVar8 = *(undefined4 *)(param_2 + 0x48);
                uVar7 = *(undefined4 *)(param_2 + 0x44);
                uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
                iVar2 = FUN_0010f034(uVar4,uVar7,uVar8);
                if ((iVar2 != 0) &&
                   (iVar2 = FUN_0010f034(uVar5 & 0xf000ffff,uVar6,uVar3), iVar2 != 0)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

