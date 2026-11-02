// rea decompile_all
// name: FUN_00017614
// address: 0x17614
// body: available
// range: 0x17614-0x18615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00017614(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong *_Dst;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  int iVar22;
  
  uVar15 = 0;
  uVar18 = 0;
  uVar20 = 0;
  iVar21 = 1;
  iVar22 = 1;
  KeWaitForSingleObject(DAT_00029268 + 0x18,0,0,0,0);
  lVar11 = DAT_00029268;
  lVar12 = *(longlong *)(param_2 + 0xb8);
  _Dst = *(ulonglong **)(param_2 + 0x18);
  iVar8 = *(int *)(lVar12 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x18);
  uVar7 = *(uint *)(lVar12 + 0x18);
  iVar1 = *(int *)(lVar12 + 8);
  uVar10 = uVar20;
  if (uVar7 < 0x80892889) {
    if (uVar7 == 0x80892888) {
      if (iVar1 == 8) {
        *(undefined4 *)_Dst = 0;
        *(undefined4 *)((longlong)_Dst + 4) = *(undefined4 *)(lVar11 + 0x730);
LAB_00017b66:
        uVar10 = 8;
        goto LAB_000185c5;
      }
    }
    else if (uVar7 < 0x808924c9) {
      if (uVar7 == 0x808924c8) {
        uVar7 = FUN_00016344(DAT_00029268,param_2,(int *)_Dst);
        goto LAB_00017a25;
      }
      if (uVar7 < 0x80892445) {
        if (uVar7 == 0x80892444) {
          if (iVar8 == 4) {
            uVar9 = FUN_00018960(lVar2,(int *)_Dst);
            uVar7 = (uint)uVar9;
            goto LAB_00017700;
          }
        }
        else {
          if (uVar7 == 0x80892400) {
            if (*(char *)(lVar2 + 0xa0) == '\0') {
              *(int *)(DAT_00029268 + 0x760) = *(int *)(DAT_00029268 + 0x760) + 1;
              *(int *)(lVar11 + 0x77c) = *(int *)(lVar11 + 0x77c) + 1;
            }
            *(undefined1 *)(lVar2 + 0xa0) = 1;
            uVar10 = uVar15;
            goto LAB_000185c5;
          }
          if (uVar7 == 0x80892404) {
            if (iVar1 == 0x5c) {
              uVar10 = FUN_00015fb0(DAT_00029268,(undefined4 *)_Dst);
              uVar13 = uVar10 & 0xffffffff;
              if (-1 < (int)uVar10) {
                uVar20 = 0x5c;
              }
              goto LAB_000185c8;
            }
          }
          else if (uVar7 == 0x80892408) {
            uVar7 = 0x808;
            if (iVar1 == 0x808) {
              uVar9 = FUN_00016184(DAT_00029268,(uint *)_Dst);
              uVar6 = (uint)uVar9;
LAB_00018160:
              uVar13 = (ulonglong)uVar6;
              if (-1 < (int)uVar6) {
                uVar20 = (ulonglong)uVar7;
              }
              goto LAB_000185c8;
            }
          }
          else if (uVar7 == 0x8089240c) {
            if ((iVar8 == 4) && (iVar1 == 0x38)) {
              uVar10 = FUN_0001626c(DAT_00029268,(int *)_Dst,(undefined4 *)_Dst);
              uVar13 = uVar10 & 0xffffffff;
              if (-1 < (int)uVar10) {
                uVar20 = 0x38;
              }
              goto LAB_000185c8;
            }
          }
          else if (uVar7 == 0x80892410) {
            if (iVar1 == 8) {
              uVar10 = FUN_000160ac(DAT_00029268,(int *)_Dst);
              uVar13 = uVar10 & 0xffffffff;
              if (-1 < (int)uVar10) {
                uVar20 = 8;
              }
              goto LAB_000185c8;
            }
          }
          else {
            if (uVar7 != 0x80892440) goto LAB_000184de;
            if (iVar8 == 4) {
              uVar9 = FUN_0001881c(lVar2,(int *)_Dst);
              uVar7 = (uint)uVar9;
              goto LAB_00017700;
            }
          }
        }
        goto LAB_0001853d;
      }
      if (uVar7 != 0x80892480) {
        if (uVar7 == 0x80892484) {
          uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
          *(undefined1 *)(lVar11 + 0x58) = uVar4;
          FUN_00018c98(lVar2);
          FUN_00018d88(lVar2);
LAB_00017866:
          KeReleaseSpinLock(lVar11 + 0x50,*(undefined1 *)(lVar11 + 0x58));
          goto LAB_000185c5;
        }
        if (uVar7 == 0x808924a0) {
          local_48 = 0;
          local_40 = 0;
          iStack_3c = 0;
          local_38 = 0;
          cVar5 = IoIs32bitProcess(param_2);
          if (cVar5 == '\0') {
            if (iVar8 == 0x14) {
              local_48 = *_Dst;
              local_40 = (int)_Dst[1];
              iStack_3c = (int)(_Dst[1] >> 0x20);
              local_38 = (int)_Dst[2];
              iVar8 = (int)local_48;
              goto LAB_00017950;
            }
          }
          else if (iVar8 == 0x10) {
            local_48 = *_Dst;
            iStack_3c = *(int *)((longlong)_Dst + 0xc);
            local_38 = iStack_3c >> 0x1f;
            local_40 = (int)_Dst[1];
            iVar8 = (int)*_Dst;
LAB_00017950:
            lVar12 = FUN_00018c54(lVar2,iVar8);
            if (lVar12 == 0) goto LAB_000178a0;
            uVar9 = FUN_00024238(lVar12,(longlong)&local_48);
            uVar7 = (uint)uVar9;
            goto LAB_00017700;
          }
          goto LAB_0001853d;
        }
        if (uVar7 == 0x808924a4) {
          if (iVar8 != 4) goto LAB_0001853d;
          lVar11 = FUN_00018c54(lVar2,(int)*_Dst);
          lVar12 = DAT_00029268;
          if (lVar11 == 0) goto LAB_000178a0;
          uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
          *(undefined1 *)(lVar12 + 0x58) = uVar4;
          FUN_00018c98(lVar2);
          KeReleaseSpinLock(lVar12 + 0x50,*(undefined1 *)(lVar12 + 0x58));
          uVar9 = FUN_000242f8(lVar11);
          uVar7 = (uint)uVar9;
        }
        else {
          if (uVar7 != 0x808924c0) {
            if (uVar7 != 0x808924c4) goto LAB_000184de;
            uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
            *(undefined1 *)(lVar11 + 0x58) = uVar4;
            FUN_00018c98(lVar2);
            *(undefined4 *)(DAT_00029268 + 0x788) = 0xffffffff;
            goto LAB_00017866;
          }
          uVar9 = FUN_00018a48(lVar2);
          uVar7 = (uint)uVar9;
        }
LAB_00017700:
        uVar13 = (ulonglong)uVar7;
        uVar20 = uVar15;
        iVar22 = iVar21;
        goto LAB_000185c8;
      }
      local_48 = 0;
      local_40 = 0;
      iStack_3c = 0;
      local_38 = 0;
      cVar5 = IoIs32bitProcess(param_2);
      if (cVar5 == '\0') {
        if (iVar8 == 0x14) {
          local_48 = *_Dst;
          local_40 = (int)_Dst[1];
          iStack_3c = (int)(_Dst[1] >> 0x20);
          local_38 = (int)_Dst[2];
          goto LAB_000179ff;
        }
      }
      else if (iVar8 == 0xc) {
        local_48 = (ulonglong)(int)*_Dst;
        local_40 = *(int *)((longlong)_Dst + 4);
        iStack_3c = local_40 >> 0x1f;
        local_38 = (int)_Dst[1];
LAB_000179ff:
        uVar10 = FUN_00018704(lVar2,(longlong *)&local_48);
        uVar7 = (uint)uVar10;
        goto LAB_00017700;
      }
    }
    else if (uVar7 < 0x80892829) {
      if (uVar7 == 0x80892828) {
        if (iVar1 == 0xc) {
          *(undefined1 *)(lVar2 + 0xa2) = 1;
          plVar17 = *(longlong **)(lVar2 + 0x78);
          if (plVar17 == (longlong *)(lVar2 + 0x78)) {
LAB_00017bff:
            uVar15 = 0xe0000007;
          }
          else {
            *(longlong *)plVar17[1] = *plVar17;
            *(longlong *)(*plVar17 + 8) = plVar17[1];
            plVar17[1] = (longlong)plVar17;
            *plVar17 = (longlong)plVar17;
            lVar12 = (longlong)plVar17 - *(longlong *)(lVar2 + 0x88);
            if (lVar12 == 0) goto LAB_00017bff;
            *(int *)(lVar2 + 0x90) = *(int *)(lVar2 + 0x90) + -1;
            *_Dst = *(ulonglong *)(lVar12 + 0x10);
            *(undefined4 *)(_Dst + 1) = *(undefined4 *)(lVar12 + 0x18);
            ExFreePoolWithTag(lVar12,0);
          }
          uVar13 = uVar15;
          if (-1 < (int)uVar15) {
            uVar20 = 0xc;
          }
          goto LAB_000185c8;
        }
      }
      else if (uVar7 == 0x80892804) {
        if (iVar1 == 0xc) {
          *(undefined1 *)_Dst = 3;
          *(undefined1 *)((longlong)_Dst + 1) = 0;
          *(undefined1 *)((longlong)_Dst + 2) = 6;
          *(undefined1 *)((longlong)_Dst + 3) = 0x13;
          *(undefined4 *)((longlong)_Dst + 4) = 1;
LAB_00017b8d:
          *(undefined4 *)(_Dst + 1) = 0;
LAB_00017b91:
          uVar10 = 0xc;
          goto LAB_000185c5;
        }
      }
      else if (uVar7 == 0x80892808) {
        if (iVar1 == 8) {
          *(undefined4 *)_Dst = *(undefined4 *)(DAT_00029268 + 0x760);
          *(undefined4 *)((longlong)_Dst + 4) = *(undefined4 *)(lVar11 + 0x764);
          goto LAB_00017b66;
        }
      }
      else if (uVar7 == 0x80892810) {
        if (iVar1 == 4) {
          uVar14 = *(undefined4 *)(DAT_00029268 + 0x744);
          goto LAB_000185bd;
        }
      }
      else if (uVar7 == 0x80892814) {
        if (iVar8 == 4) {
          *(int *)(DAT_00029268 + 0x744) = (int)*_Dst;
          goto LAB_00017b12;
        }
      }
      else {
        if (uVar7 != 0x80892820) {
          if (uVar7 != 0x80892824) goto LAB_000184de;
          if (*(longlong *)(lVar2 + 0x98) != 0) {
            ObfDereferenceObject();
            *(undefined8 *)(lVar2 + 0x98) = 0;
          }
          goto LAB_000185c5;
        }
        cVar5 = IoIs32bitProcess(param_2);
        if (cVar5 == '\0') {
          if (iVar8 == 8) {
            uVar15 = *_Dst;
            goto LAB_00017ac8;
          }
        }
        else if (iVar8 == 4) {
          uVar15 = (ulonglong)(int)*_Dst;
LAB_00017ac8:
          if (*(longlong *)(lVar2 + 0x98) != 0) {
            uVar13 = 0xe0000021;
            goto LAB_000185c8;
          }
          uVar15 = FUN_00013910((longlong *)(lVar2 + 0x98),uVar15);
          uVar13 = uVar15 & 0xffffffff;
          if ((int)uVar15 < 0) goto LAB_000185c8;
          *(undefined1 *)(lVar2 + 0xa2) = 1;
          goto LAB_000185c5;
        }
      }
    }
    else if (uVar7 == 0x80892860) {
      uVar10 = 0x104;
      if (iVar1 == 0x104) {
        plVar17 = (longlong *)(DAT_00029268 + 0xd0);
        FUN_00016bc8(plVar17);
        FUN_000264d0(_Dst,0,0x104);
LAB_00017dd3:
        if (uVar15 == 0) {
          if ((longlong *)*plVar17 == plVar17) goto LAB_000185c5;
          uVar15 = *plVar17 - *(longlong *)(lVar11 + 0xe0);
        }
        else {
          plVar3 = *(longlong **)(*(longlong *)(lVar11 + 0xe0) + uVar15);
          if (plVar3 == plVar17) goto LAB_000185c5;
          uVar15 = (longlong)plVar3 - *(longlong *)(lVar11 + 0xe0);
        }
        if (uVar15 == 0) goto LAB_000185c5;
        if ((uint)*_Dst < 0x40) {
          *(undefined4 *)((longlong)_Dst + (ulonglong)(uint)*_Dst * 4 + 4) =
               *(undefined4 *)(uVar15 + 0xe0);
          *(int *)_Dst = (int)*_Dst + 1;
        }
        goto LAB_00017dd3;
      }
    }
    else if (uVar7 == 0x80892864) {
      uVar10 = 0x808;
      if (iVar1 == 0x808) {
        FUN_00016790(DAT_00029268,(uint *)_Dst);
        goto LAB_000185c5;
      }
    }
    else if (uVar7 == 0x80892868) {
      uVar7 = 0x408;
      if (iVar1 == 0x408) {
        FUN_00016bc8((longlong *)(DAT_00029268 + 0xd0));
        plVar17 = (longlong *)(lVar11 + 0x120);
        FUN_00023624(plVar17);
        *(undefined4 *)_Dst = 0;
        *(undefined4 *)((longlong)_Dst + 0x204) = 0;
LAB_00017d1d:
        if (uVar15 == 0) {
          if ((longlong *)*plVar17 == plVar17) goto LAB_000181d6;
          uVar15 = *plVar17 - *(longlong *)(lVar11 + 0x130);
        }
        else {
          plVar3 = *(longlong **)(*(longlong *)(lVar11 + 0x130) + uVar15);
          if (plVar3 == plVar17) goto LAB_000181d6;
          uVar15 = (longlong)plVar3 - *(longlong *)(lVar11 + 0x130);
        }
        if (uVar15 == 0) goto LAB_000181d6;
        puVar19 = (ulonglong *)((longlong)_Dst + 0x204);
        if (*(char *)(uVar15 + 0x78) != '\0') {
          puVar19 = _Dst;
        }
        if ((uint)*puVar19 < 0x80) {
          *(undefined4 *)((longlong)puVar19 + (ulonglong)(uint)*puVar19 * 4 + 4) =
               *(undefined4 *)(uVar15 + 0x1c);
          *(uint *)puVar19 = (uint)*puVar19 + 1;
        }
        goto LAB_00017d1d;
      }
    }
    else if (uVar7 == 0x80892880) {
      if (iVar1 == 0xc) {
        *(undefined4 *)_Dst = 0;
        lVar12 = DAT_00029268;
        if (*(longlong **)(lVar11 + 0xd0) == (longlong *)(lVar11 + 0xd0)) goto LAB_00017cac;
        *(undefined4 *)((longlong)_Dst + 4) = *(undefined4 *)(DAT_00029268 + 0x72c);
        if (*(int *)(lVar12 + 0x72c) != 1) goto LAB_00017b8d;
        *(undefined4 *)(_Dst + 1) = *(undefined4 *)(lVar12 + 0xf0);
        goto LAB_00017b91;
      }
    }
    else {
      if (uVar7 != 0x80892884) goto LAB_000184de;
      if (iVar8 == 0xc) {
        if (*(int *)((longlong)_Dst + 4) == 1) {
          lVar12 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),(int)_Dst[1]);
          uVar13 = (ulonglong)((-(uint)(lVar12 != 0) & 0xffffffd1) + 0xe0000040);
        }
        else {
          uVar13 = 0xe0000020;
        }
        goto LAB_000185c8;
      }
    }
  }
  else if (uVar7 < 0x80892a01) {
    if (uVar7 == 0x80892a00) {
      FUN_00014e7c(DAT_00029268,0);
      uVar7 = FUN_00014cc0(lVar11,0,uVar18);
      *(uint *)(param_2 + 0x30) = uVar7;
      *(undefined8 *)(param_2 + 0x38) = 0;
      IofCompleteRequest(param_2,0);
LAB_00017a25:
      iVar22 = 0;
      uVar13 = (ulonglong)uVar7;
      goto LAB_000185c8;
    }
    if (uVar7 < 0x80892925) {
      if (uVar7 == 0x80892924) {
        if (iVar8 == 0x200) {
          lVar12 = FUN_000165fc(DAT_00029268,(int *)_Dst);
          uVar7 = (uint)lVar12;
          goto LAB_00017700;
        }
      }
      else if (uVar7 == 0x8089288c) {
        if (iVar8 == 8) {
          if (1 < *(uint *)((longlong)_Dst + 4)) {
            uVar13 = 0xe0000030;
            goto LAB_000185c8;
          }
          *(uint *)(DAT_00029268 + 0x730) = *(uint *)((longlong)_Dst + 4);
          goto LAB_00017b12;
        }
      }
      else if (uVar7 == 0x808928c0) {
        if (iVar1 == 0x2c) {
          *(undefined4 *)_Dst = 0;
          *(undefined4 *)((longlong)_Dst + 4) = *(undefined4 *)(lVar11 + 0x6fc);
          uVar7 = FUN_00014794(lVar11);
          *(undefined4 *)(_Dst + 1) = 0;
          piVar16 = &DAT_000275b0;
          do {
            if (((piVar16[4] & uVar7) != 0) && ((uint)_Dst[1] < 8)) {
              *(int *)((longlong)_Dst + (ulonglong)(uint)_Dst[1] * 4 + 0xc) = *piVar16;
              *(int *)(_Dst + 1) = (int)_Dst[1] + 1;
            }
            piVar16 = piVar16 + 5;
          } while (*piVar16 != 0);
          uVar10 = 0x2c;
          goto LAB_000185c5;
        }
      }
      else if (uVar7 == 0x808928c4) {
        if (iVar8 == 8) {
          uVar7 = FUN_00016424(DAT_00029268,param_2,(ulonglong)_Dst);
          goto LAB_00017a25;
        }
      }
      else if (uVar7 == 0x80892900) {
        if ((iVar8 == 4) && (uVar10 = 0x338, iVar1 == 0x338)) {
          lVar12 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),(int)*_Dst);
          if (lVar12 != 0) {
            FUN_00019450(lVar12,_Dst);
            goto LAB_000185c5;
          }
LAB_000178a0:
          uVar13 = 0xe0000040;
          goto LAB_000185c8;
        }
      }
      else if (uVar7 == 0x80892904) {
        if (iVar8 == 0xc) {
          lVar12 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),(int)*_Dst);
          if (lVar12 != 0) {
            if (*(int *)(lVar11 + 0x764) == 0) {
              uVar13 = FUN_0001954c(lVar12,(longlong)_Dst);
              uVar13 = uVar13 & 0xffffffff;
              if (*(char *)(lVar11 + 0x7c0) != '\0') {
                FUN_00014e7c(lVar11,0);
                uVar7 = FUN_00014cc0(lVar11,0,uVar18);
                uVar13 = (ulonglong)uVar7;
              }
              if (-1 < (int)uVar13) {
                FUN_00015e00(DAT_00029268,3,0,0,3);
              }
            }
            else {
              uVar13 = 0xe0000047;
            }
            goto LAB_000185c8;
          }
          goto LAB_000178a0;
        }
      }
      else {
        if (uVar7 != 0x80892920) goto LAB_000184de;
        if ((iVar8 == 4) && (iVar1 == 0x200)) {
          uVar10 = *_Dst;
          FUN_000264d0(_Dst,0,0x200);
          lVar12 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),(int)uVar10);
          if (lVar12 != 0) {
            FUN_0001a400(lVar12,(undefined4 *)_Dst);
            uVar10 = 0x200;
            goto LAB_000185c5;
          }
          goto LAB_000178a0;
        }
      }
    }
    else if (uVar7 == 0x80892928) {
      if ((iVar8 == 4) && (uVar7 = 0xd4, iVar1 == 0xd4)) {
        lVar12 = FUN_00016b88((longlong *)(DAT_00029268 + 0xd0),(int)*_Dst);
        if (lVar12 == 0) goto LAB_000178a0;
        *(undefined4 *)_Dst = *(undefined4 *)(lVar12 + 0xe8);
        memcpy(_Dst + 7,(void *)(lVar12 + 0x1188),0x34);
        memcpy((void *)((longlong)_Dst + 4),(void *)(lVar12 + 0x2d0),0x34);
        memcpy(_Dst + 0x14,(void *)(lVar12 + 0x13cc),0x34);
        memcpy((void *)((longlong)_Dst + 0x6c),(void *)(lVar12 + 0x1398),0x34);
LAB_000181d6:
        uVar10 = (ulonglong)uVar7;
LAB_000185c5:
        uVar13 = 0;
        uVar20 = uVar10;
        goto LAB_000185c8;
      }
    }
    else if (uVar7 == 0x80892980) {
      if ((iVar8 == 4) && (iVar1 == 0x5c)) {
        uVar10 = *_Dst;
        FUN_000264d0(_Dst,0,0x5c);
        lVar12 = FUN_00024054((longlong *)(DAT_00029268 + 0x120),(int)uVar10);
        if (lVar12 != 0) {
          iVar8 = 0x28;
          *(undefined4 *)_Dst = *(undefined4 *)(lVar12 + 0x1c);
          *(undefined4 *)((longlong)_Dst + 4) = *(undefined4 *)(*(longlong *)(lVar12 + 0x20) + 0xe0)
          ;
          *(uint *)(_Dst + 1) = (uint)(*(char *)(lVar12 + 0x114) == '\0');
          FUN_000117c0((char *)((longlong)_Dst + 0xc),(char *)(lVar12 + 0xc4),0x28);
          FUN_000117c0((char *)((longlong)_Dst + 0x34),(char *)(lVar12 + 0xec),iVar8);
          uVar10 = (ulonglong)(iVar8 + 0x34);
          goto LAB_000185c5;
        }
        goto LAB_000178a0;
      }
    }
    else if (uVar7 == 0x80892984) {
      if (iVar8 == 0x5c) {
        uVar9 = FUN_00016864(DAT_00029268,(int *)_Dst);
        uVar7 = (uint)uVar9;
        goto LAB_00017700;
      }
    }
    else if (uVar7 == 0x808929c0) {
      if ((iVar8 == 4) && (uVar7 = 0x38c, iVar1 == 0x38c)) {
        lVar12 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),(int)*_Dst);
        lVar11 = DAT_00029268;
        if (lVar12 == 0) goto LAB_000178a0;
        uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
        *(undefined1 *)(lVar11 + 0x58) = uVar4;
        FUN_00022fec(lVar12,(undefined4 *)_Dst);
        uVar4 = *(undefined1 *)(lVar11 + 0x58);
        goto LAB_000181d0;
      }
    }
    else if (uVar7 == 0x808929e0) {
      if ((iVar8 == 4) && (uVar7 = 0x186, iVar1 == 0x186)) {
        uVar9 = FUN_0001693c(DAT_00029268,(int *)_Dst,(undefined4 *)_Dst);
        uVar6 = (uint)uVar9;
        goto LAB_00018160;
      }
    }
    else {
      if (uVar7 != 0x808929e4) goto LAB_000184de;
      if (iVar8 == 0x186) {
        lVar12 = FUN_00024014((longlong *)(DAT_00029268 + 0x120),(int)*_Dst);
        lVar11 = DAT_00029268;
        if (lVar12 != 0) {
          if (*(char *)(lVar12 + 0x78) != '\0') {
            uVar13 = 0xe0000023;
            goto LAB_000185c8;
          }
          uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
          *(undefined1 *)(lVar11 + 0x58) = uVar4;
          FUN_00022b48(lVar12 + 0x130,(longlong)_Dst);
          goto LAB_00017866;
        }
        goto LAB_000178a0;
      }
    }
  }
  else if (uVar7 < 0x80892aa5) {
    if (uVar7 == 0x80892aa4) {
LAB_00018430:
      if (iVar8 == 4) {
        if ((((int)*_Dst == 0) || (iVar8 = 0x10, (uint)*_Dst < 0x11)) &&
           (iVar8 = (int)*_Dst, (int)*_Dst == 0)) {
          iVar8 = iVar21;
        }
        *(int *)(DAT_00029268 + 0x738) = iVar8;
LAB_00017b12:
        iVar8 = FUN_000144d4(lVar11);
LAB_00017b1a:
        uVar13 = uVar15;
        if (iVar8 < 0) {
          uVar13 = 0xe0000060;
        }
        goto LAB_000185c8;
      }
    }
    else {
      if (uVar7 == 0x80892a04) {
        uVar9 = FUN_00014e7c(DAT_00029268,0);
        uVar7 = (uint)uVar9;
        goto LAB_00017700;
      }
      if (uVar7 == 0x80892a80) {
        if (iVar1 == 4) {
          if (*(longlong **)(DAT_00029268 + 0xd0) == (longlong *)(DAT_00029268 + 0xd0)) {
LAB_00017cac:
            uVar13 = 0xe0000050;
            goto LAB_000185c8;
          }
          *(uint *)_Dst = (uint)(*(int *)(DAT_00029268 + 0x6f8) * 0x7d) / 1000;
LAB_000185bf:
          uVar10 = 4;
          goto LAB_000185c5;
        }
      }
      else {
        if (uVar7 == 0x80892a84) goto LAB_00018430;
        if (uVar7 == 0x80892a88) {
          if (iVar1 == 4) {
            if (*(longlong **)(DAT_00029268 + 0xd0) == (longlong *)(DAT_00029268 + 0xd0))
            goto LAB_00017cac;
            uVar14 = *(undefined4 *)(DAT_00029268 + 0x70c);
LAB_000185bd:
            *(undefined4 *)_Dst = uVar14;
            goto LAB_000185bf;
          }
        }
        else if (uVar7 == 0x80892a8c) {
          if (iVar8 == 4) {
            uVar7 = FUN_00016530(DAT_00029268,(uint *)_Dst,'\0');
            goto LAB_00017700;
          }
        }
        else {
          if (uVar7 != 0x80892aa0) goto LAB_000184de;
          if (iVar1 == 4) {
            if (*(longlong **)(DAT_00029268 + 0xd0) == (longlong *)(DAT_00029268 + 0xd0))
            goto LAB_00017cac;
            uVar14 = *(undefined4 *)(DAT_00029268 + 0x738);
            goto LAB_000185bd;
          }
        }
      }
    }
  }
  else if (uVar7 == 0x80892aa8) {
    if (iVar1 == 4) {
      if (*(longlong **)(DAT_00029268 + 0xd0) != (longlong *)(DAT_00029268 + 0xd0)) {
        uVar14 = *(undefined4 *)(DAT_00029268 + 0x73c);
        goto LAB_000185bd;
      }
      goto LAB_00017cac;
    }
  }
  else if (uVar7 == 0x80892aac) {
    if (iVar8 == 4) {
      uVar14 = 0x8000;
      if ((uint)*_Dst < 0x8000) {
        uVar14 = (int)*_Dst;
      }
      *(undefined4 *)(DAT_00029268 + 0x73c) = uVar14;
      iVar8 = FUN_000144d4(lVar11);
      goto LAB_00017b1a;
    }
  }
  else if (uVar7 == 0x80892ac4) {
    uVar7 = 0xd08;
    if (iVar1 == 0xd08) {
      uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar11 + 0x58) = uVar4;
      FUN_00021314((longlong *)(lVar11 + 400),(uint *)_Dst);
LAB_00018528:
      uVar4 = *(undefined1 *)(lVar11 + 0x58);
LAB_000181d0:
      KeReleaseSpinLock(lVar11 + 0x50,uVar4);
      goto LAB_000181d6;
    }
  }
  else {
    if (uVar7 != 0x80892ac8) {
      if (uVar7 != 0x80892ae0) {
LAB_000184de:
        uVar13 = 0xe0000035;
        iVar22 = 1;
        goto LAB_000185c8;
      }
      FUN_00016a30();
      goto LAB_000185c5;
    }
    uVar7 = 0x3c;
    if (iVar1 == 0x3c) {
      uVar4 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar11 + 0x58) = uVar4;
      memcpy(_Dst,(void *)(lVar11 + 0x768),0x3c);
      goto LAB_00018528;
    }
  }
LAB_0001853d:
  uVar13 = 0xc000000d;
  iVar22 = iVar21;
LAB_000185c8:
  KeReleaseMutex(DAT_00029268 + 0x18,0);
  if ((char)iVar22 != '\0') {
    *(ulonglong *)(param_2 + 0x38) = uVar20;
    *(int *)(param_2 + 0x30) = (int)uVar13;
    IofCompleteRequest(param_2,0);
  }
  return uVar13;
}

