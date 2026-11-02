// rea decompile_all
// name: FUN_00002d48
// address: 0x2d48
// body: available
// range: 0x2d48-0x2ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00002d48(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint *local_20;
  uint *local_18;
  
  uVar1 = 0;
  local_18 = param_2;
  do {
    param_1[8] = uVar1;
LAB_00002d52:
    uVar1 = (*(code *)param_1[3])(param_1);
    iVar6 = DAT_00002ecc;
    if (uVar1 == 0) goto LAB_00002ec8;
    if (uVar1 != 0x25) {
      pcVar5 = (code *)param_1[1];
      uVar4 = param_1[2];
      goto LAB_00002ebe;
    }
    uVar4 = 0;
    while (((uVar1 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar1 && (uVar1 < 0x31)) &&
           (uVar2 = (uint)*(byte *)(iVar6 + uVar1 + 0x2d4e), uVar2 != 0))) {
      uVar4 = uVar4 | uVar2;
    }
    if ((int)(uVar4 << 0x1e) < 0) {
      uVar4 = uVar4 & 0xfffffffb;
    }
    param_1[7] = 0;
    iVar6 = 0;
    param_1[6] = 0;
    do {
      if (uVar1 == 0x2a) {
        uVar1 = *local_18;
        local_18 = local_18 + 1;
        param_1[iVar6 + 6] = uVar1;
        uVar1 = (*(code *)param_1[3])(param_1);
        if (iVar6 == 1) {
          if ((int)param_1[7] < 0) {
            uVar4 = uVar4 & 0xffffffdf;
          }
          break;
        }
      }
      else {
        iVar3 = FUN_00179b6c(uVar1);
        if (iVar3 != 0) {
          local_20 = param_1 + iVar6;
          local_20[6] = uVar1 - 0x30;
          while( true ) {
            uVar1 = (*(code *)param_1[3])(param_1);
            iVar3 = FUN_00179b6c();
            if (iVar3 == 0) break;
            local_20[6] = (local_20[6] * 10 + uVar1) - 0x30;
          }
        }
        if (iVar6 == 1) break;
      }
      if (uVar1 != 0x2e) break;
      uVar1 = (*(code *)param_1[3])(param_1);
      uVar4 = uVar4 | 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if ((int)param_1[6] < 0) {
      param_1[6] = -param_1[6];
      uVar4 = uVar4 | 1;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 & 0xffffffef;
    }
    if ((uVar1 == 0x6c) || (uVar1 == 0x68)) {
      uVar2 = (*(code *)param_1[3])(param_1);
      if (uVar2 == uVar1) {
        if (uVar1 == 0x6c) goto LAB_00002eaa;
        uVar1 = 0x400;
        goto LAB_00002e5a;
      }
      if (uVar1 == 0x6c) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = 0x100;
      }
      uVar4 = uVar4 | uVar1;
      uVar1 = uVar2;
    }
    else {
      if (uVar1 != 0x4c) {
        if (uVar1 == 0x6a) {
LAB_00002eaa:
          uVar1 = 0x80;
          goto LAB_00002e5a;
        }
        if ((uVar1 != 0x74) && (uVar1 != 0x7a)) goto LAB_00002e70;
      }
      uVar1 = 0;
LAB_00002e5a:
      uVar4 = uVar4 | uVar1;
      uVar1 = (*(code *)param_1[3])(param_1);
    }
LAB_00002e70:
    if (uVar1 == 0) {
LAB_00002ec8:
      return CONCAT44(local_20,param_1[8]);
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x800;
      uVar1 = uVar1 + 0x20;
    }
    *param_1 = uVar4;
    iVar6 = FUN_0000218c(param_1,uVar1);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        local_18 = local_18 + 1;
      }
      else {
        local_18 = (uint *)(((int)local_18 + 7U & 0xfffffff8) + 8);
      }
      goto LAB_00002d52;
    }
    pcVar5 = (code *)param_1[1];
    uVar4 = param_1[2];
LAB_00002ebe:
    (*pcVar5)(uVar1,uVar4);
    uVar1 = param_1[8] + 1;
  } while( true );
}

