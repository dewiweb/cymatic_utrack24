// rea decompile_all
// name: FUN_0016cdec
// address: 0x16cdec
// body: available
// range: 0x16cdec-0x16ce63 inclusive
// range: 0x16ce88-0x16cebf inclusive
// range: 0x16cf68-0x16d2a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0016cdec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_160 [4];
  undefined1 auStack_15c [8];
  undefined1 auStack_154 [10];
  undefined2 local_14a;
  undefined1 auStack_148 [12];
  undefined1 local_13c;
  undefined1 auStack_134 [24];
  undefined1 auStack_11c [84];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [12];
  uint local_a4 [15];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  int *piStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  bVar1 = false;
  piStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  FUN_001bd96c(auStack_68,param_2);
  iVar2 = FUN_001bda20(auStack_68);
  if (iVar2 == 0) {
    FUN_00152644(auStack_68);
    return;
  }
  piVar7 = param_1 + 0x12f;
  piVar6 = param_1 + 0x1b9;
  do {
    puVar3 = (uint *)FUN_001bd9f4(auStack_68);
    if (puVar3 != (uint *)0x0) {
      uVar4 = *puVar3;
      uVar5 = uVar4 & 0xff;
      if (uVar5 == 0x20) {
        if ((uVar4 & 0x40000) == 0) {
LAB_0016d148:
          (**(code **)(*param_1 + 0x28))(param_1,local_2c);
        }
        else {
          FUN_0015b70c(&local_c8);
          iVar2 = FUN_0014ce34(&local_c8,puVar3);
          if (iVar2 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            uVar4 = local_a4[0] & 7;
            if (uVar4 == 1) {
              FUN_0016aa9c(piVar6,local_2c,0,&local_c8);
            }
            else if (uVar4 == 2) {
              FUN_0016a93c(piVar6,local_2c,0,&local_c8);
            }
            else if (uVar4 == 3) {
              FUN_0016a7dc(piVar6,local_2c,0,&local_c8);
            }
          }
          FUN_0015b770(&local_c8);
        }
      }
      else if (uVar5 < 0x21) {
        switch(uVar5) {
        case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x14:
        case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x17:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
switchD_0016ce5c_default:
        bVar1 = true;
      }
      else if (uVar5 == 0xf2) {
        FUN_001532f0(auStack_160);
        iVar2 = FUN_0014ce34(auStack_160,puVar3);
        if (iVar2 == 0) {
          param_1[0x1e8] = param_1[0x1e8] + 1;
        }
        else {
          FUN_001726d4(&local_c8,auStack_148);
          FUN_0016c1f8(param_1,&local_c8);
          FUN_001726d4(&local_c8,auStack_148);
          FUN_001610e8(piVar7,&local_c8);
          bVar1 = true;
        }
        FUN_00153330(auStack_160);
      }
      else if (uVar5 < 0xf3) {
        if (uVar5 == 0x31) {
          if ((uVar4 & 0x40000) == 0) goto LAB_0016d148;
          FUN_0015bf80(auStack_160);
          iVar2 = FUN_0014ce34(auStack_160,puVar3);
          if (iVar2 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_001512cc(&local_c8);
            thunk_FUN_0014cd1c(auStack_48,param_1 + 0xfa);
            FUN_001726d4(auStack_3c,auStack_148);
            iVar2 = FUN_00150bd4(&local_c8,local_14a,auStack_3c,auStack_48);
            FUN_0014cd8c(auStack_48);
            if ((iVar2 != 0) && (iVar2 = FUN_0015fa28(param_1 + 0xfa,local_13c,iVar2), iVar2 != 0))
            {
              (**(code **)(*param_1 + 0x24))(param_1,&local_c8,param_3);
            }
            (**(code **)(*param_1 + 0x20))(param_1,local_2c);
            FUN_0015111c(&local_c8);
            FUN_0014ca10(auStack_b4);
            FUN_0014ca10(auStack_bc);
            local_c4 = 0;
            local_c8 = 0;
            local_c0 = 0;
          }
          FUN_0015bfb0(auStack_160);
        }
        else {
          if (uVar5 != 0xf0) goto switchD_0016ce5c_default;
LAB_0016cf68:
          FUN_00158670(auStack_134);
          iVar2 = FUN_0014ce34(auStack_134,puVar3);
          if (iVar2 == 0) {
            param_1[0x1e8] = param_1[0x1e8] + 1;
          }
          else {
            FUN_001726d4(auStack_15c,auStack_11c);
            FUN_00161778(piVar7,auStack_15c,param_3,uVar5 == 0xf4);
            bVar1 = true;
          }
          FUN_00158704(auStack_134);
        }
      }
      else {
        if (uVar5 != 0xf3) {
          if (uVar5 == 0xf4) goto LAB_0016cf68;
          goto switchD_0016ce5c_default;
        }
        FUN_00159108(&local_c8);
        iVar2 = FUN_0014ce34(&local_c8,puVar3);
        if (iVar2 == 0) {
          param_1[0x1e8] = param_1[0x1e8] + 1;
        }
        else {
          FUN_001726d4(auStack_160,auStack_b0);
          FUN_001726d4(auStack_154,local_a4);
          FUN_00161998(piVar7,auStack_160,auStack_154,param_3);
          bVar1 = true;
        }
        FUN_00159150(&local_c8);
      }
    }
    FUN_001525d8(auStack_68);
    iVar2 = FUN_001bda20(auStack_68);
    if (iVar2 == 0) {
      FUN_00152644(auStack_68);
      if (!bVar1) {
        return;
      }
      (**(code **)(*param_1 + 0x28))(param_1,local_2c);
      return;
    }
  } while( true );
}

