// rea decompile_all
// name: FUN_005c7b10
// address: 0x5c7b10
// body: available
// range: 0x5c7b10-0x5c7ffc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7b10(void)

{
  int iVar1;
  undefined1 *puVar2;
  HMIDIOUT pHVar3;
  uint uVar4;
  UINT UVar5;
  MMRESULT MVar6;
  int iVar7;
  undefined4 *puVar8;
  HANDLE pvVar9;
  UINT uDeviceID;
  int *piVar10;
  UINT_PTR uDeviceID_00;
  undefined1 *local_80;
  int local_78;
  HMIDIOUT local_74;
  undefined1 *local_70;
  HMIDIOUT local_6c;
  tagMIDIOUTCAPSW local_68;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ab41;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uDeviceID = 0xffffffff;
  local_14 = uVar4;
  UVar5 = midiOutGetNumDevs();
  local_74 = (HMIDIOUT)0x0;
  local_70 = &DAT_00bfe12c;
  uDeviceID_00 = 0;
  local_8 = 0;
  iVar7 = DAT_00c8a8bc;
  if (UVar5 != 0) {
    do {
      _memset(&local_68,0,0x54);
      MVar6 = midiOutGetDevCapsW(uDeviceID_00,&local_68,0x54);
      if (MVar6 == 0) {
        FUN_0045cd10(local_68.szPname,uVar4);
        iVar7 = FUN_0045d240(local_80,"microsoft");
        puVar2 = local_70;
        if (-1 < iVar7) {
          uDeviceID = uDeviceID_00;
        }
        if (local_6c == local_74) {
          piVar10 = (int *)(local_80 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            UNLOCK();
          }
          LOCK();
          local_70 = local_80;
          UNLOCK();
          piVar10 = (int *)(puVar2 + -8);
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar7 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(piVar10);
            }
          }
          piVar10 = (int *)(local_80 + -8);
          iVar7 = DAT_00c8a8bc;
          uDeviceID = uDeviceID_00;
          if (piVar10 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            iVar7 = DAT_00c8a8bc;
            if (iVar1 == 0) {
              FID_conflict__free(piVar10);
              iVar7 = DAT_00c8a8bc;
            }
          }
          break;
        }
        local_74 = (HMIDIOUT)((int)&local_74->unused + 1);
        piVar10 = (int *)(local_80 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
      }
      uDeviceID_00 = uDeviceID_00 + 1;
      iVar7 = DAT_00c8a8bc;
    } while (uDeviceID_00 < UVar5);
  }
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) {
      iVar7 = 3;
      goto LAB_005c7ce0;
    }
    local_6c = *(HMIDIOUT *)((int)DAT_00c8a8b4 + iVar7 * 4);
  } while (local_6c[1].unused != uDeviceID);
  local_6c->unused = local_6c->unused + 1;
  puVar8 = operator_new(100);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0045c990("midi out");
  *puVar8 = juce::Thread::vftable;
  puVar8[1] = UVar5;
  piVar10 = (int *)(UVar5 - 8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  puVar8[2] = 0;
  puVar8[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 4));
  pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar8[10] = pvVar9;
  pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar8[0xb] = pvVar9;
  puVar8[0xc] = 5;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  *puVar8 = juce::MidiOutput::vftable;
  puVar8[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 0x11));
  puVar8[0x17] = 0;
  puVar8[0x18] = local_70;
  piVar10 = (int *)(local_70 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  puVar8[0x10] = local_6c;
  goto LAB_005c7fbb;
  while( true ) {
    if (MVar6 != 4) break;
    Sleep(100);
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) break;
LAB_005c7ce0:
    local_74 = (HMIDIOUT)0x0;
    MVar6 = midiOutOpen(&local_74,uDeviceID,0,0,0);
    if (MVar6 == 0) {
      local_6c = operator_new(0xc);
      *(undefined8 *)local_6c = 0;
      *(undefined4 *)((int)local_6c + 8) = 0;
      *(UINT *)((int)local_6c + 4) = uDeviceID;
      *local_6c = 1;
      *(HMIDIOUT *)((int)local_6c + 8) = local_74;
      if (((int)DAT_00c8a8b8 < DAT_00c8a8bc + 1) &&
         (uVar4 = DAT_00c8a8bc + 9 + (DAT_00c8a8bc + 1) / 2 & 0xfffffff8, DAT_00c8a8b8 != uVar4)) {
        if ((int)uVar4 < 1) {
          FID_conflict__free(DAT_00c8a8b4);
          DAT_00c8a8b4 = (void *)0x0;
          DAT_00c8a8b8 = uVar4;
        }
        else if (DAT_00c8a8b4 == (void *)0x0) {
          DAT_00c8a8b4 = (void *)FUN_004c554b();
          DAT_00c8a8b8 = uVar4;
        }
        else {
          DAT_00c8a8b4 = (void *)FUN_004c553b(DAT_00c8a8b4,uVar4 * 4);
          DAT_00c8a8b8 = uVar4;
        }
      }
      pHVar3 = local_6c;
      puVar8 = (undefined4 *)((int)DAT_00c8a8b4 + DAT_00c8a8bc * 4);
      DAT_00c8a8bc = DAT_00c8a8bc + 1;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = local_6c;
      }
      puVar8 = operator_new(100);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0045c990("midi out");
      *puVar8 = juce::Thread::vftable;
      puVar8[1] = local_78;
      local_6c = (HMIDIOUT)(local_78 + -8);
      if (local_6c != (HMIDIOUT)&DAT_00bfe124) {
        LOCK();
        local_6c->unused = local_6c->unused + 1;
        UNLOCK();
      }
      puVar8[2] = 0;
      puVar8[3] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 4));
      pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar8[10] = pvVar9;
      pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar8[0xb] = pvVar9;
      puVar8[0xc] = 5;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      *(undefined1 *)(puVar8 + 0xf) = 0;
      if (local_6c != (HMIDIOUT)&DAT_00bfe124) {
        LOCK();
        iVar7 = local_6c->unused;
        local_6c->unused = local_6c->unused + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(local_6c);
        }
      }
      *puVar8 = juce::MidiOutput::vftable;
      puVar8[0x10] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 0x11));
      puVar8[0x17] = 0;
      puVar8[0x18] = local_70;
      piVar10 = (int *)(local_70 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        *piVar10 = *piVar10 + 1;
        UNLOCK();
      }
      puVar8[0x10] = pHVar3;
      break;
    }
  }
LAB_005c7fbb:
  piVar10 = (int *)(local_70 + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

