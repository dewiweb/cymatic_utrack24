// rea decompile_all
// name: FUN_000ab2b0
// address: 0xab2b0
// body: available
// range: 0xab2b0-0xab5af inclusive
// range: 0xab648-0xab6f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000ab2b0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  if (param_3 == 0) {
    return 2;
  }
  iVar2 = FUN_00003960(*param_2,&DAT_000ab5b0);
  if (iVar2 == 0) {
    if (param_3 == 1) {
      FUN_000984ec();
      FUN_00040698();
    }
    else {
      iVar2 = FUN_00003960(param_2[1],s_reset_000ab5e0);
      if (iVar2 != 0) {
        return 3;
      }
      FUN_000984ec(0);
      iVar2 = FUN_000984ec();
      *(undefined4 *)(iVar2 + 0x424) = 0;
      *(undefined4 *)(iVar2 + 0x42c) = 0;
      *(undefined4 *)(iVar2 + 0x430) = 0;
      *(undefined4 *)(iVar2 + 0x434) = 0;
      *(undefined4 *)(iVar2 + 0x438) = 0;
      *(undefined4 *)(iVar2 + 0x43c) = 0;
      *(undefined4 *)(iVar2 + 0x440) = 0;
      *(undefined4 *)(iVar2 + 0x44c) = 0;
      *(undefined4 *)(iVar2 + 0x450) = 0;
      *(undefined4 *)(iVar2 + 0x454) = 0;
      *(undefined4 *)(iVar2 + 0x45c) = 0;
      *(undefined4 *)(iVar2 + 0x460) = 0;
      *(undefined4 *)(iVar2 + 0x464) = 0;
      *(undefined4 *)(iVar2 + 0x468) = 0;
      *(undefined4 *)(iVar2 + 0x444) = 0;
      *(undefined4 *)(iVar2 + 0x448) = 0;
      *(undefined4 *)(iVar2 + 0x46c) = 0;
      *(undefined4 *)(iVar2 + 0x470) = 0;
      *(undefined4 *)(iVar2 + 0x474) = 0;
      *(undefined4 *)(iVar2 + 0x478) = 0;
      *(undefined4 *)(iVar2 + 0x47c) = 0;
    }
  }
  else {
    iVar2 = FUN_00003960(*param_2,&DAT_000ab5b8);
    if (iVar2 == 0) {
      FUN_000984ec();
      FUN_00095fec();
    }
    else {
      iVar2 = FUN_00003960(*param_2,&DAT_000ab5bc);
      if (iVar2 == 0) {
        if (param_3 == 1) {
          FUN_000984ec();
          FUN_00097e68();
        }
        else if (param_3 == 2) {
          uStack_2c = 0;
          iVar2 = FUN_0017dc98(param_2,2,1,&uStack_2c,s_Endpoint_number_expected_000ab5e8);
          if (iVar2 == 0) {
            return 6;
          }
          if (7 < uStack_2c) {
            FUN_000028a4(s_Invalid_endpoint___i__000ab604);
            return 6;
          }
          uVar6 = FUN_000984ec(iVar2);
          FUN_000964b8(uVar6,uStack_2c & 0xff);
        }
      }
      else {
        iVar2 = FUN_00003960(*param_2,&DAT_000ab5c0);
        if (iVar2 == 0) {
          FUN_000984ec();
          FUN_00097fac();
        }
        else {
          iVar2 = FUN_00003960(*param_2,s_explicit_000ab5c8);
          if (iVar2 == 0) {
            iVar2 = FUN_000984ec();
            uVar6 = FUN_001e3fe4(*(undefined4 *)(iVar2 + 0x610));
            uVar6 = FUN_001e400c(uVar6,DAT_000ab61c);
            uVar6 = FUN_001e4420(uVar6,0xfffffff3);
            iVar2 = FUN_000984ec();
            uVar9 = *(undefined4 *)(iVar2 + 0x6a8);
            iVar2 = FUN_000984ec();
            uVar3 = *(uint *)(iVar2 + 0x61c);
            iVar2 = FUN_000984ec();
            uVar8 = *(undefined4 *)(iVar2 + 0x618);
            uVar11 = FUN_001e3c58(uVar6);
            iVar2 = FUN_000984ec();
            local_24 = *DAT_000ab620;
            uStack_2c = uVar3;
            uStack_28 = uVar9;
            FUN_000028a4(_DAT_000ab624,*(undefined4 *)(iVar2 + 0x610),(int)uVar11,
                         (int)((ulonglong)uVar11 >> 0x20),uVar8);
            return 0;
          }
          iVar2 = FUN_00003960(*param_2,&DAT_000ab5d4);
          puVar1 = DAT_000ab5d8;
          if (iVar2 == 0) {
            if (param_3 == 1) {
              FUN_000028a4(s___USB_balance__d___d____d__000ab626 + 2,DAT_000ab5d8[2],DAT_000ab5d8[3]
                           ,DAT_000ab5d8[4]);
              return 0;
            }
            iVar2 = FUN_00003960(param_2[1],s_reset_000ab5e0);
            if (iVar2 == 0) {
              puVar1[2] = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              FUN_000028a4(s___USB_balance__d___d____d__000ab626 + 2,0,0,0);
            }
            else {
              uVar3 = FUN_0000317c(param_2[1]);
              uVar4 = 0;
              if (uVar3 != 0) {
                do {
                  FUN_000028a4(s___USB_balance__d___d____d__000ab626 + 2,puVar1[2],puVar1[3],
                               puVar1[4]);
                  FUN_0017b9f8(1000);
                  uVar4 = uVar4 + 1;
                } while (uVar4 < uVar3);
              }
              FUN_000028a4(&DAT_000ab644);
            }
          }
          else {
            iVar2 = FUN_00003960(*param_2,&DAT_000ab5dc);
            if (iVar2 != 0) {
              return 2;
            }
            if (param_3 == 1) {
              iVar12 = puVar1[9];
              uVar10 = puVar1[8];
              uVar4 = FUN_001e3fe4(uVar10 - iVar12);
              uVar3 = DAT_000ab6f4;
              iVar2 = puVar1[6];
              if (DAT_000ab6f4 <= uVar4) {
                uVar4 = uVar4 ^ 0x80000000;
              }
              uVar5 = FUN_001e3fe4(iVar2 - iVar12);
              if (uVar3 <= uVar5) {
                uVar5 = uVar5 ^ 0x80000000;
              }
              uVar6 = FUN_001e3d8c(uVar5,uVar4);
              FUN_001e400c(uVar6,_DAT_000ab6f8);
              uVar11 = FUN_001e3c58();
              uStack_28 = puVar1[7];
              pcVar7 = s_BUsbDecoder__TS__9d____3_1f______000ab6fb + 1;
              uStack_2c = uVar10;
            }
            else {
              iVar2 = FUN_00003960(param_2[1],s_reset_000ab5e0);
              if (iVar2 != 0) {
                return 2;
              }
              puVar1[7] = 0;
              iVar12 = 0;
              iVar2 = puVar1[6];
              uVar11 = CONCAT44(puVar1[8],puVar1[9]);
              pcVar7 = s_UsbDecoder__TS__9d___9d____9d____000ab734;
            }
            FUN_000028a4(pcVar7,iVar2,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),iVar12);
          }
        }
      }
    }
  }
  return 0;
}

