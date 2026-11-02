// rea decompile_all
// name: FUN_000b5120
// address: 0xb5120
// body: available
// range: 0xb5120-0xb546b inclusive
// range: 0xb5560-0xb5697 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000b5120(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_140;
  int local_13c [24];
  undefined4 local_dc [25];
  int local_78 [6];
  undefined4 local_60 [8];
  int local_40 [7];
  
  if (param_3 == 0) {
    return 6;
  }
  FUN_000028a4(s_DMA_performance_monitoring____000b546c);
  FUN_0017b9f8(100);
  iVar1 = FUN_00003960(*param_2,&DAT_000b548c);
  iVar2 = DAT_000b5494;
  uVar4 = DAT_000b5490;
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      uVar3 = 0;
      do {
        FUN_000736b0(iVar1,uVar3);
        FUN_0017b9f8(100);
        FUN_00073708(local_78 + iVar1 * 3 + uVar3,local_60 + iVar1 * 3 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      uVar3 = 0;
      do {
        iVar8 = local_78[iVar1 * 3 + uVar3];
        if (iVar8 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_001e3fe4(iVar8);
          uVar7 = FUN_001e3fe4(local_60[iVar1 * 3 + uVar3]);
          uVar5 = FUN_001e3d8c(uVar7,uVar5);
        }
        uVar10 = FUN_001e3c58(uVar5);
        FUN_001e378c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,uVar4);
        FUN_000028a4(s_engine__i__s__10d____10d____7_2f_000b54a0,iVar1,iVar2 + uVar3 * 10,
                     local_60[iVar1 * 3 + uVar3],iVar8);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  else {
    iVar1 = FUN_00003960(*param_2,&DAT_000b5498);
    if (iVar1 == 0) {
      if (param_3 < 2) {
        return 6;
      }
      uVar3 = FUN_0000317c(param_2[1]);
      if (0x3f < uVar3) {
        FUN_000028a4(s_Invalid_context_number_000b54c8);
        return 6;
      }
      uVar6 = 0;
      do {
        FUN_00073a2c(uVar3,uVar6);
        FUN_0017b9f8(100);
        FUN_00073708(local_40 + uVar6 + 3,local_40 + uVar6);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 3);
      uVar6 = 0;
      do {
        iVar1 = local_40[uVar6 + 3];
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_001e3fe4(iVar1);
          uVar7 = FUN_001e3fe4(local_40[uVar6]);
          uVar5 = FUN_001e3d8c(uVar7,uVar5);
        }
        uVar10 = FUN_001e3c58(uVar5);
        FUN_001e378c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,uVar4);
        FUN_000028a4(s_context__i__s__10d____10d____7_2_000b54e0,uVar3,iVar2 + uVar6 * 10,
                     local_40[uVar6],iVar1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 3);
    }
    else {
      iVar2 = FUN_00003960(*param_2,&DAT_000b549c);
      if (iVar2 != 0) {
        return 6;
      }
      if (param_3 < 2) {
        iVar2 = 0;
        do {
          FUN_00073654(iVar2,0);
          FUN_0017b9f8(100);
          FUN_00073708((int)local_dc + (iVar2 * 2 + -1) * 4,&local_140 + iVar2 * 2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xc);
        iVar2 = 0;
        do {
          FUN_00073654(iVar2,1);
          FUN_0017b9f8(100);
          FUN_00073708((int)local_dc + iVar2 * 8,(int)local_13c + iVar2 * 8);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xc);
        iVar2 = 0;
        do {
          iVar1 = *(int *)((int)local_13c + iVar2 * 8);
          uVar5 = FUN_001e3fe4();
          uVar4 = uVar5;
          uVar7 = FUN_001e3fe4(*(undefined4 *)((int)local_dc + (iVar2 * 2 + -1) * 4));
          uVar3 = FUN_001e400c(uVar7,uVar5);
          iVar8 = (&local_140)[iVar2 * 2];
          uVar5 = FUN_001e3fe4();
          uVar7 = FUN_001e3fe4(*(undefined4 *)((int)local_dc + iVar2 * 8));
          uVar7 = FUN_001e400c(uVar7,uVar5);
          if ((uVar3 & 0x7fffffff) >> 0x17 != 0) {
            FUN_001e3d8c(uVar7,uVar3);
          }
          uVar10 = FUN_001e3c58();
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_001e3d8c(uVar5,uVar4);
          }
          uVar11 = FUN_001e3c58(uVar4);
          FUN_000028a4(s_vclient__i_request__10d____10d___000b5528,iVar2,iVar8,iVar1,uVar11,uVar10);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xc);
      }
      else {
        uVar3 = FUN_0000317c(param_2[1]);
        if (0xb < uVar3) {
          FUN_000028a4(s_Invalid_virtual_client_number_000b5508);
          return 6;
        }
        FUN_00073654(uVar3,0);
        FUN_0017b9f8(100);
        puVar9 = (undefined4 *)((int)local_dc + (uVar3 * 2 + -1) * 4);
        FUN_00073708(puVar9,&local_140 + uVar3 * 2);
        FUN_00073654(uVar3,1);
        FUN_0017b9f8(100);
        FUN_00073708((int)local_dc + uVar3 * 8,(int)local_13c + uVar3 * 8);
        iVar2 = *(int *)((int)local_13c + uVar3 * 8);
        uVar4 = FUN_001e3fe4();
        uVar5 = FUN_001e3fe4(*puVar9);
        uVar6 = FUN_001e400c(uVar5,uVar4);
        iVar1 = (&local_140)[uVar3 * 2];
        uVar5 = FUN_001e3fe4();
        uVar7 = FUN_001e3fe4(*(undefined4 *)((int)local_dc + uVar3 * 8));
        uVar7 = FUN_001e400c(uVar7,uVar5);
        if ((uVar6 & 0x7fffffff) >> 0x17 != 0) {
          FUN_001e3d8c(uVar7,uVar6);
        }
        uVar10 = FUN_001e3c58();
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_001e3d8c(uVar5,uVar4);
        }
        uVar11 = FUN_001e3c58(uVar4);
        FUN_000028a4(s_vclient__i_request__10d____10d___000b5528,uVar3,iVar1,iVar2,uVar11,uVar10);
      }
    }
  }
  return 0;
}

