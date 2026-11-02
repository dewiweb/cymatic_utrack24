// rea decompile_all
// name: FUN_0052fcc0
// address: 0x52fcc0
// body: available
// range: 0x52fcc0-0x531ce9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0052fcc0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *local_3e0;
  int *local_3d8;
  int *local_3d0;
  int *local_3cc;
  int *local_3c8;
  int *local_3c4;
  int *local_3c0;
  int *local_3bc;
  int *local_3b8;
  int *local_3b4;
  int *local_3b0;
  int *local_3ac;
  int *local_3a8;
  int *local_3a4;
  int *local_3a0;
  int *local_39c;
  int *local_398;
  int *local_394;
  int *local_390;
  int *local_38c;
  int *local_388;
  int *local_384;
  int *local_380;
  int *local_37c;
  int *local_378;
  int *local_374;
  int *local_370;
  int *local_36c;
  int *local_368;
  int *local_364;
  int *local_35c;
  int *local_358;
  int *local_354;
  int *local_350;
  int *local_34c;
  int *local_348;
  int *local_344;
  int *local_340;
  int *local_33c;
  int *local_338;
  int *local_334;
  int *local_330;
  int *local_32c;
  int *local_328;
  int *local_324;
  int *local_320;
  int *local_31c;
  int *local_318;
  int *local_314;
  int *local_310;
  int *local_30c;
  int *local_308;
  int *local_304;
  int *local_300;
  int *local_2fc;
  int *local_2f8;
  int *local_2f4;
  int *local_2f0;
  int *local_2ec;
  int *local_2e8;
  int *local_2e4;
  int *local_2e0;
  int *local_2dc;
  int *local_2d8;
  int *local_2d4;
  int *local_2cc;
  int *local_2c8;
  int *local_2c4;
  int *local_2c0;
  int *local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  int *local_2ac;
  int *local_2a8;
  int *local_2c;
  uint local_28;
  char local_21;
  uint local_20;
  uint local_1c;
  ushort local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d09a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_21 = '\x01';
  if (*(int *)(in_ECX + 8) == 0) {
    FUN_0052f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_28 = *(uint *)(in_ECX + 0x40);
    local_20 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x14) + *(int *)(*(int *)(in_ECX + 0x3c) + 0x10);
    FUN_0057b0f0();
    while( true ) {
      if (local_20 <= local_28) {
        ExceptionList = local_10;
        return local_21;
      }
      if ((uint)*(ushort *)(in_ECX + 0x4e) <= *(uint *)(in_ECX + 8)) {
        ExceptionList = local_10;
        return local_21;
      }
      if (local_21 == '\0') {
        ExceptionList = local_10;
        return '\0';
      }
      cVar1 = FUN_0057b120(local_28,local_20);
      if (cVar1 == '\0') break;
      local_2c = (int *)0x0;
      uVar2 = local_1c & 0xff00;
      if (uVar2 < 0x4201) {
        if (uVar2 == 0x4200) {
          switch(local_1c & 0xff) {
          case 1:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 0x2d;
            if (iVar3 == 0) {
              local_364 = (int *)0x0;
            }
            else {
              local_364 = (int *)FUN_0057c2e0();
            }
            local_8 = 0xffffffff;
            local_2c = local_364;
            break;
          case 2:
            iVar3 = FUN_005af82d(0x34);
            local_8 = 0x2e;
            if (iVar3 == 0) {
              local_368 = (int *)0x0;
            }
            else {
              local_368 = (int *)FUN_0057c600();
            }
            local_8 = 0xffffffff;
            local_2c = local_368;
            break;
          case 3:
            iVar3 = FUN_005af82d(0x5c);
            local_8 = 0x2f;
            if (iVar3 == 0) {
              local_36c = (int *)0x0;
            }
            else {
              local_36c = (int *)FUN_0057c940();
            }
            local_8 = 0xffffffff;
            local_2c = local_36c;
            break;
          case 4:
            iVar3 = FUN_005af82d(0x5c);
            local_8 = 0x30;
            if (iVar3 == 0) {
              local_370 = (int *)0x0;
            }
            else {
              local_370 = (int *)FUN_0057c940();
            }
            local_8 = 0xffffffff;
            local_2c = local_370;
            break;
          case 5:
            iVar3 = FUN_005af82d(0x24);
            local_8 = 0x31;
            if (iVar3 == 0) {
              local_374 = (int *)0x0;
            }
            else {
              local_374 = (int *)FUN_0057cf40();
            }
            local_8 = 0xffffffff;
            local_2c = local_374;
            break;
          case 6:
            iVar3 = FUN_005af82d(0x30);
            local_8 = 0x32;
            if (iVar3 == 0) {
              local_378 = (int *)0x0;
            }
            else {
              local_378 = (int *)FUN_0057d200();
            }
            local_8 = 0xffffffff;
            local_2c = local_378;
            break;
          case 7:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 0x33;
            if (iVar3 == 0) {
              local_37c = (int *)0x0;
            }
            else {
              local_37c = (int *)FUN_0057d4f0();
            }
            local_8 = 0xffffffff;
            local_2c = local_37c;
            break;
          case 8:
            iVar3 = FUN_005af82d(0x68);
            local_8 = 0x34;
            if (iVar3 == 0) {
              local_380 = (int *)0x0;
            }
            else {
              local_380 = (int *)FUN_0057d800();
            }
            local_8 = 0xffffffff;
            local_2c = local_380;
            break;
          case 0x20:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x3c);
                local_8 = 0x36;
                if (iVar3 == 0) {
                  local_388 = (int *)0x0;
                }
                else {
                  local_388 = (int *)FUN_0057df10();
                }
                local_8 = 0xffffffff;
                local_2c = local_388;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x28);
              local_8 = 0x35;
              if (iVar3 == 0) {
                local_384 = (int *)0x0;
              }
              else {
                local_384 = (int *)FUN_0057de40();
              }
              local_8 = 0xffffffff;
              local_2c = local_384;
            }
            break;
          case 0x21:
            iVar3 = FUN_005af82d(0x30);
            local_8 = 0x37;
            if (iVar3 == 0) {
              local_38c = (int *)0x0;
            }
            else {
              local_38c = (int *)FUN_0057e260();
            }
            local_8 = 0xffffffff;
            local_2c = local_38c;
            break;
          case 0x22:
            iVar3 = FUN_005af82d(0x18);
            local_8 = 0x38;
            if (iVar3 == 0) {
              local_390 = (int *)0x0;
            }
            else {
              local_390 = (int *)FUN_0057e640();
            }
            local_8 = 0xffffffff;
            local_2c = local_390;
            break;
          case 0x30:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x3a;
            if (iVar3 == 0) {
              local_398 = (int *)0x0;
            }
            else {
              local_398 = (int *)FUN_0057e930();
            }
            local_8 = 0xffffffff;
            local_2c = local_398;
            break;
          case 0xe0:
            iVar3 = FUN_005af82d(0x20);
            local_8 = 0x47;
            if (iVar3 == 0) {
              local_3cc = (int *)0x0;
            }
            else {
              local_3cc = (int *)FUN_005808a0();
            }
            local_8 = 0xffffffff;
            local_2c = local_3cc;
            break;
          case 0xe1:
            iVar3 = FUN_005af82d(0x3c);
            local_8 = 0x48;
            if (iVar3 == 0) {
              local_3d0 = (int *)0x0;
            }
            else {
              local_3d0 = (int *)FUN_00580bb0();
            }
            local_8 = 0xffffffff;
            local_2c = local_3d0;
            break;
          case 0xf0:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x30);
                local_8 = 0x3c;
                if (iVar3 == 0) {
                  local_3a0 = (int *)0x0;
                }
                else {
                  local_3a0 = (int *)FUN_0057ed10();
                }
                local_8 = 0xffffffff;
                local_2c = local_3a0;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x2c);
              local_8 = 0x3b;
              if (iVar3 == 0) {
                local_39c = (int *)0x0;
              }
              else {
                local_39c = (int *)FUN_0057eb60();
              }
              local_8 = 0xffffffff;
              local_2c = local_39c;
            }
            break;
          case 0xf1:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x30);
                local_8 = 0x3e;
                if (iVar3 == 0) {
                  local_3a8 = (int *)0x0;
                }
                else {
                  local_3a8 = (int *)FUN_0057f850();
                }
                local_8 = 0xffffffff;
                local_2c = local_3a8;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x34);
              local_8 = 0x3d;
              if (iVar3 == 0) {
                local_3a4 = (int *)0x0;
              }
              else {
                local_3a4 = (int *)FUN_0057f560();
              }
              local_8 = 0xffffffff;
              local_2c = local_3a4;
            }
            break;
          case 0xf2:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x2c);
                local_8 = 0x40;
                if (iVar3 == 0) {
                  local_3b0 = (int *)0x0;
                }
                else {
                  local_3b0 = (int *)FUN_0057aff0();
                }
                local_8 = 0xffffffff;
                local_2c = local_3b0;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x34);
              local_8 = 0x3f;
              if (iVar3 == 0) {
                local_3ac = (int *)0x0;
              }
              else {
                local_3ac = (int *)FUN_0057fa80();
              }
              local_8 = 0xffffffff;
              local_2c = local_3ac;
            }
            break;
          case 0xf3:
            iVar3 = FUN_005af82d(0x18);
            local_8 = 0x41;
            if (iVar3 == 0) {
              local_3b4 = (int *)0x0;
            }
            else {
              local_3b4 = (int *)FUN_0057fd60();
            }
            local_8 = 0xffffffff;
            local_2c = local_3b4;
            break;
          case 0xf4:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x30);
                local_8 = 0x43;
                if (iVar3 == 0) {
                  local_3bc = (int *)0x0;
                }
                else {
                  local_3bc = (int *)FUN_0057fef0();
                }
                local_8 = 0xffffffff;
                local_2c = local_3bc;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x28);
              local_8 = 0x42;
              if (iVar3 == 0) {
                local_3b8 = (int *)0x0;
              }
              else {
                local_3b8 = (int *)FUN_0057fe20();
              }
              local_8 = 0xffffffff;
              local_2c = local_3b8;
            }
            break;
          case 0xf5:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x2c);
                local_8 = 0x45;
                if (iVar3 == 0) {
                  local_3c4 = (int *)0x0;
                }
                else {
                  local_3c4 = (int *)FUN_00580260();
                }
                local_8 = 0xffffffff;
                local_2c = local_3c4;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x28);
              local_8 = 0x44;
              if (iVar3 == 0) {
                local_3c0 = (int *)0x0;
              }
              else {
                local_3c0 = (int *)FUN_00580190();
              }
              local_8 = 0xffffffff;
              local_2c = local_3c0;
            }
            break;
          case 0xf6:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x39;
            if (iVar3 == 0) {
              local_394 = (int *)0x0;
            }
            else {
              local_394 = (int *)FUN_0057e700();
            }
            local_8 = 0xffffffff;
            local_2c = local_394;
            break;
          case 0xf7:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x46;
            if (iVar3 == 0) {
              local_3c8 = (int *)0x0;
            }
            else {
              local_3c8 = (int *)FUN_005803e0();
            }
            local_8 = 0xffffffff;
            local_2c = local_3c8;
          }
        }
        else if (uVar2 == 0x1000) {
          switch(local_1c & 0xff) {
          case 1:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x34);
                local_8 = 1;
                if (iVar3 == 0) {
                  local_2ac = (int *)0x0;
                }
                else {
                  local_2ac = (int *)FUN_0058c6c0();
                }
                local_8 = 0xffffffff;
                local_2c = local_2ac;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x28);
              local_8 = 0;
              if (iVar3 == 0) {
                local_2a8 = (int *)0x0;
              }
              else {
                local_2a8 = (int *)FUN_0058c5f0();
              }
              local_8 = 0xffffffff;
              local_2c = local_2a8;
            }
            break;
          case 2:
            iVar3 = FUN_005af82d(0x38);
            local_8 = 2;
            if (iVar3 == 0) {
              local_2b0 = (int *)0x0;
            }
            else {
              local_2b0 = (int *)FUN_0058c8c0();
            }
            local_8 = 0xffffffff;
            local_2c = local_2b0;
            break;
          case 3:
            iVar3 = FUN_005af82d(0x2c);
            local_8 = 3;
            if (iVar3 == 0) {
              local_2b4 = (int *)0x0;
            }
            else {
              local_2b4 = (int *)FUN_0058ccc0();
            }
            local_8 = 0xffffffff;
            local_2c = local_2b4;
            break;
          case 0x12:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 4;
            if (iVar3 == 0) {
              local_2b8 = (int *)0x0;
            }
            else {
              local_2b8 = (int *)FUN_0058d050();
            }
            local_8 = 0xffffffff;
            local_2c = local_2b8;
            break;
          case 0x13:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 5;
            if (iVar3 == 0) {
              local_2bc = (int *)0x0;
            }
            else {
              local_2bc = (int *)FUN_0058d350();
            }
            local_8 = 0xffffffff;
            local_2c = local_2bc;
            break;
          case 0x14:
            iVar3 = FUN_005af82d(0x24);
            local_8 = 6;
            if (iVar3 == 0) {
              local_2c0 = (int *)0x0;
            }
            else {
              local_2c0 = (int *)FUN_0058d680();
            }
            local_8 = 0xffffffff;
            local_2c = local_2c0;
            break;
          case 0x15:
            iVar3 = FUN_005af82d(0x24);
            local_8 = 7;
            if (iVar3 == 0) {
              local_2c4 = (int *)0x0;
            }
            else {
              local_2c4 = (int *)FUN_0058d940();
            }
            local_8 = 0xffffffff;
            local_2c = local_2c4;
            break;
          case 0x20:
            iVar3 = FUN_005af82d(0x24);
            local_8 = 8;
            if (iVar3 == 0) {
              local_2c8 = (int *)0x0;
            }
            else {
              local_2c8 = (int *)FUN_0058dc00();
            }
            local_8 = 0xffffffff;
            local_2c = local_2c8;
            break;
          case 0x21:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 9;
            if (iVar3 == 0) {
              local_2cc = (int *)0x0;
            }
            else {
              local_2cc = (int *)FUN_0058dec0();
            }
            local_8 = 0xffffffff;
            local_2c = local_2cc;
          }
        }
        else if (uVar2 == 0x2300) {
          switch(local_1c & 0xff) {
          case 1:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x118);
                local_8 = 0x10;
                if (iVar3 == 0) {
                  local_2ec = (int *)0x0;
                }
                else {
                  local_2ec = (int *)FUN_005831b0();
                }
                local_8 = 0xffffffff;
                local_2c = local_2ec;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x50);
              local_8 = 0xf;
              if (iVar3 == 0) {
                local_2e8 = (int *)0x0;
              }
              else {
                local_2e8 = (int *)FUN_00582e20();
              }
              local_8 = 0xffffffff;
              local_2c = local_2e8;
            }
            break;
          case 0x10:
            iVar3 = FUN_005af82d(0x84);
            local_8 = 0x11;
            if (iVar3 == 0) {
              local_2f0 = (int *)0x0;
            }
            else {
              local_2f0 = (int *)FUN_00585f30();
            }
            local_8 = 0xffffffff;
            local_2c = local_2f0;
            break;
          case 0x11:
            iVar3 = FUN_005af82d(0x84);
            local_8 = 0x12;
            if (iVar3 == 0) {
              local_2f4 = (int *)0x0;
            }
            else {
              local_2f4 = (int *)FUN_00586030();
            }
            local_8 = 0xffffffff;
            local_2c = local_2f4;
            break;
          case 0x12:
            iVar3 = FUN_005af82d(0x84);
            local_8 = 0x13;
            if (iVar3 == 0) {
              local_2f8 = (int *)0x0;
            }
            else {
              local_2f8 = (int *)FUN_005863f0();
            }
            local_8 = 0xffffffff;
            local_2c = local_2f8;
            break;
          case 0x13:
            iVar3 = FUN_005af82d(0x84);
            local_8 = 0x14;
            if (iVar3 == 0) {
              local_2fc = (int *)0x0;
            }
            else {
              local_2fc = (int *)FUN_00586490();
            }
            local_8 = 0xffffffff;
            local_2c = local_2fc;
            break;
          case 0x14:
            iVar3 = FUN_005af82d(200);
            local_8 = 0x15;
            if (iVar3 == 0) {
              local_300 = (int *)0x0;
            }
            else {
              local_300 = (int *)FUN_00586530();
            }
            local_8 = 0xffffffff;
            local_2c = local_300;
            break;
          case 0x15:
            iVar3 = FUN_005af82d(0x2c);
            local_8 = 0x16;
            if (iVar3 == 0) {
              local_304 = (int *)0x0;
            }
            else {
              local_304 = (int *)FUN_00586bc0();
            }
            local_8 = 0xffffffff;
            local_2c = local_304;
            break;
          case 0x16:
          case 0x17:
          case 0x18:
            iVar3 = FUN_005af82d(0x9c);
            local_8 = 0x17;
            if (iVar3 == 0) {
              local_308 = (int *)0x0;
            }
            else {
              local_308 = (int *)FUN_0058b280(local_1c & 0xff);
            }
            local_8 = 0xffffffff;
            local_2c = local_308;
            break;
          case 0x19:
            iVar3 = FUN_005af82d(0x80);
            local_8 = 0x18;
            if (iVar3 == 0) {
              local_30c = (int *)0x0;
            }
            else {
              local_30c = (int *)FUN_0058b540();
            }
            local_8 = 0xffffffff;
            local_2c = local_30c;
            break;
          case 0x1a:
            iVar3 = FUN_005af82d(0x2c);
            local_8 = 0x19;
            if (iVar3 == 0) {
              local_310 = (int *)0x0;
            }
            else {
              local_310 = (int *)FUN_0058bb60();
            }
            local_8 = 0xffffffff;
            local_2c = local_310;
            break;
          case 0x20:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x80);
                local_8 = 0x1b;
                if (iVar3 == 0) {
                  local_318 = (int *)0x0;
                }
                else {
                  local_318 = (int *)FUN_00588fa0();
                }
                local_8 = 0xffffffff;
                local_2c = local_318;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x40);
              local_8 = 0x1a;
              if (iVar3 == 0) {
                local_314 = (int *)0x0;
              }
              else {
                local_314 = (int *)FUN_00588cb0();
              }
              local_8 = 0xffffffff;
              local_2c = local_314;
            }
            break;
          case 0x31:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x48);
                local_8 = 0x1d;
                if (iVar3 == 0) {
                  local_320 = (int *)0x0;
                }
                else {
                  local_320 = (int *)FUN_0058a2b0();
                }
                local_8 = 0xffffffff;
                local_2c = local_320;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x2c);
              local_8 = 0x1c;
              if (iVar3 == 0) {
                local_31c = (int *)0x0;
              }
              else {
                local_31c = (int *)FUN_0058a120();
              }
              local_8 = 0xffffffff;
              local_2c = local_31c;
            }
            break;
          case 0x51:
            iVar3 = FUN_005af82d(0x3c);
            local_8 = 0x1e;
            if (iVar3 == 0) {
              local_324 = (int *)0x0;
            }
            else {
              local_324 = (int *)FUN_00586d40();
            }
            local_8 = 0xffffffff;
            local_2c = local_324;
            break;
          case 0x52:
            iVar3 = FUN_005af82d(0x2c);
            local_8 = 0x1f;
            if (iVar3 == 0) {
              local_328 = (int *)0x0;
            }
            else {
              local_328 = (int *)FUN_00589d10();
            }
            local_8 = 0xffffffff;
            local_2c = local_328;
            break;
          case 0x60:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x20;
            if (iVar3 == 0) {
              local_32c = (int *)0x0;
            }
            else {
              local_32c = (int *)FUN_005871c0();
            }
            local_8 = 0xffffffff;
            local_2c = local_32c;
            break;
          case 0x61:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x21;
            if (iVar3 == 0) {
              local_330 = (int *)0x0;
            }
            else {
              local_330 = (int *)FUN_00587410();
            }
            local_8 = 0xffffffff;
            local_2c = local_330;
            break;
          case 0x70:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x3c);
                local_8 = 0x23;
                if (iVar3 == 0) {
                  local_338 = (int *)0x0;
                }
                else {
                  local_338 = (int *)FUN_00587940();
                }
                local_8 = 0xffffffff;
                local_2c = local_338;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x38);
              local_8 = 0x22;
              if (iVar3 == 0) {
                local_334 = (int *)0x0;
              }
              else {
                local_334 = (int *)FUN_005876b0();
              }
              local_8 = 0xffffffff;
              local_2c = local_334;
            }
            break;
          case 0x71:
            if ((local_1c & 0x40000) == 0) {
              if ((local_1c & 0x20000) != 0) {
                iVar3 = FUN_005af82d(0x34);
                local_8 = 0x25;
                if (iVar3 == 0) {
                  local_340 = (int *)0x0;
                }
                else {
                  local_340 = (int *)FUN_00588300();
                }
                local_8 = 0xffffffff;
                local_2c = local_340;
              }
            }
            else {
              iVar3 = FUN_005af82d(0x3c);
              local_8 = 0x24;
              if (iVar3 == 0) {
                local_33c = (int *)0x0;
              }
              else {
                local_33c = (int *)FUN_00587e70();
              }
              local_8 = 0xffffffff;
              local_2c = local_33c;
            }
            break;
          case 0x80:
            iVar3 = FUN_005af82d(0x3c);
            local_8 = 0x26;
            if (iVar3 == 0) {
              local_344 = (int *)0x0;
            }
            else {
              local_344 = (int *)FUN_00588760(1);
            }
            local_8 = 0xffffffff;
            local_2c = local_344;
            break;
          case 0x81:
            iVar3 = FUN_005af82d(0x3c);
            local_8 = 0x27;
            if (iVar3 == 0) {
              local_348 = (int *)0x0;
            }
            else {
              local_348 = (int *)FUN_00588760(0);
            }
            local_8 = 0xffffffff;
            local_2c = local_348;
            break;
          case 0x90:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x28;
            if (iVar3 == 0) {
              local_34c = (int *)0x0;
            }
            else {
              local_34c = (int *)FUN_00588560();
            }
            local_8 = 0xffffffff;
            local_2c = local_34c;
            break;
          case 0x91:
            iVar3 = FUN_005af82d(0x40);
            local_8 = 0x29;
            if (iVar3 == 0) {
              local_350 = (int *)0x0;
            }
            else {
              local_350 = (int *)FUN_0058aa30();
            }
            local_8 = 0xffffffff;
            local_2c = local_350;
            break;
          case 0x92:
            iVar3 = FUN_005af82d(0x1c);
            local_8 = 0x2a;
            if (iVar3 == 0) {
              local_354 = (int *)0x0;
            }
            else {
              local_354 = (int *)FUN_0058ad80();
            }
            local_8 = 0xffffffff;
            local_2c = local_354;
            break;
          case 0xf0:
            iVar3 = FUN_005af82d(0x70);
            local_8 = 10;
            if (iVar3 == 0) {
              local_2d4 = (int *)0x0;
            }
            else {
              local_2d4 = (int *)FUN_00582150();
            }
            local_8 = 0xffffffff;
            local_2c = local_2d4;
            break;
          case 0xf1:
            iVar3 = FUN_005af82d(0x70);
            local_8 = 0xb;
            if (iVar3 == 0) {
              local_2d8 = (int *)0x0;
            }
            else {
              local_2d8 = (int *)FUN_00582150();
            }
            local_8 = 0xffffffff;
            local_2c = local_2d8;
            break;
          case 0xf2:
            iVar3 = FUN_005af82d(0x28);
            local_8 = 0xe;
            if (iVar3 == 0) {
              local_2e4 = (int *)0x0;
            }
            else {
              local_2e4 = (int *)FUN_00582820();
            }
            local_8 = 0xffffffff;
            local_2c = local_2e4;
            break;
          case 0xf3:
            iVar3 = FUN_005af82d(0x30);
            local_8 = 0xd;
            if (iVar3 == 0) {
              local_2e0 = (int *)0x0;
            }
            else {
              local_2e0 = (int *)FUN_00582b30();
            }
            local_8 = 0xffffffff;
            local_2c = local_2e0;
            break;
          case 0xf4:
            iVar3 = FUN_005af82d(0x70);
            local_8 = 0xc;
            if (iVar3 == 0) {
              local_2dc = (int *)0x0;
            }
            else {
              local_2dc = (int *)FUN_00582150();
            }
            local_8 = 0xffffffff;
            local_2c = local_2dc;
          }
        }
        else if (uVar2 == 0x3700) {
          if ((local_1c & 0x20000) == 0) {
            iVar3 = FUN_005af82d(0x28);
            local_8 = 0x2c;
            if (iVar3 == 0) {
              local_35c = (int *)0x0;
            }
            else {
              local_35c = (int *)FUN_005819f0();
            }
            local_2c = local_35c;
          }
          else {
            iVar3 = FUN_005af82d(0x28);
            local_8 = 0x2b;
            if (iVar3 == 0) {
              local_358 = (int *)0x0;
            }
            else {
              local_358 = (int *)FUN_00581d40();
            }
            local_2c = local_358;
          }
          local_8 = 0xffffffff;
        }
      }
      else if (uVar2 == 0x5b00) {
        if ((char)local_1c == '\x01') {
          iVar3 = FUN_005af82d(0x430);
          local_8 = 0x49;
          if (iVar3 == 0) {
            local_3d8 = (int *)0x0;
          }
          else {
            local_3d8 = (int *)FUN_0057bc70();
          }
          local_8 = 0xffffffff;
          local_2c = local_3d8;
        }
      }
      else if ((uVar2 == 0x6300) && ((char)local_1c == '\x01')) {
        iVar3 = FUN_005af82d(0x2c);
        local_8 = 0x4a;
        if (iVar3 == 0) {
          local_3e0 = (int *)0x0;
        }
        else {
          local_3e0 = (int *)FUN_0057b6a0();
        }
        local_8 = 0xffffffff;
        local_2c = local_3e0;
      }
      if (local_2c == (int *)0x0) {
        local_21 = '\0';
      }
      else {
        cVar1 = (**(code **)(*local_2c + 0xc))(&local_28,local_14 + local_28);
        if (cVar1 == '\0') {
          if (local_2c != (int *)0x0) {
            (**(code **)*local_2c)(1);
          }
          local_21 = '\0';
        }
        else {
          FUN_00537c20(local_2c);
          local_28 = local_28 + 3 & 0xfffffffc;
        }
      }
    }
    local_21 = '\0';
  }
  else {
    local_21 = '\x01';
  }
  ExceptionList = local_10;
  return local_21;
}

