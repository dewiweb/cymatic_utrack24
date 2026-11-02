// rea decompile_all
// name: FUN_0001c804
// address: 0x1c804
// body: available
// range: 0x1c804-0x1cadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001c804(ulonglong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte bVar8;
  byte local_res8 [8];
  byte local_res18 [8];
  byte local_res20 [8];
  longlong local_28 [2];
  
  bVar1 = FUN_0001d880(param_1 + 0x1408,param_2,'\x01',local_res18,local_res8,local_28);
  if (!bVar1) {
    pcVar6 = "GetInterfaceForSamplerate IN failed.";
LAB_0001c845:
    iVar2 = -0x3fffffff;
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar6);
    goto LAB_0001cab5;
  }
  *(longlong *)(param_1 + 0x1410) = local_28[0];
  iVar2 = FUN_0001c36c(param_1,local_res18[0],local_res8[0]);
  if (iVar2 < 0) {
LAB_0001ca08:
    pcVar6 = "SetAlternateSetting IN failed.";
LAB_0001ca0f:
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar6);
LAB_0001cab1:
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  else {
    bVar1 = FUN_0001d880(param_1 + 0x1408,param_2,'\0',local_res20,local_res8,local_28);
    if (!bVar1) {
      pcVar6 = "GetInterfaceForSamplerate OUT failed.";
      goto LAB_0001c8c0;
    }
    *(longlong *)(param_1 + 0x1418) = local_28[0];
    iVar2 = FUN_0001c36c(param_1,local_res20[0],local_res8[0]);
    if (iVar2 < 0) {
      pcVar6 = "SetAlternateSetting out failed.";
      goto LAB_0001ca0f;
    }
    lVar3 = FUN_0001c328(param_1,local_res18[0]);
    if (lVar3 == 0) {
      pcVar6 = "FindInterface in failed.";
      goto LAB_0001c845;
    }
    uVar7 = 1;
    lVar3 = FUN_0001f718(lVar3,0,0x80,1);
    *(longlong *)(param_1 + 0x128) = lVar3;
    if (lVar3 == 0) {
      pcVar6 = "FindPipe ino in failed.";
    }
    else {
      lVar3 = FUN_0001c328(param_1,local_res20[0]);
      if (lVar3 == 0) {
        pcVar6 = "FindInterface out failed.";
      }
      else {
        lVar3 = FUN_0001f718(lVar3,0,0,(int)uVar7);
        *(longlong *)(param_1 + 0x338) = lVar3;
        if (*(longlong *)(param_1 + 0x1420) == 0) goto LAB_0001cab1;
        bVar8 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1420) + 0x20) + 2);
        uVar5 = param_1;
        pbVar4 = FUN_0001bed0(param_1,(byte *)0x0,(uint)bVar8,(uint)uVar7,0xffffffff,0xffffffff);
        if ((pbVar4 == (byte *)0x0) || (iVar2 = FUN_0001c36c(uVar5,bVar8,(byte)uVar7), -1 < iVar2))
        {
          lVar3 = FUN_0001c328(param_1,*(char *)(*(longlong *)
                                                  (*(longlong *)(param_1 + 0x1420) + 0x20) + 2));
          if (lVar3 == 0) {
            pcVar6 = "FindInterface Midi in failed.";
          }
          else {
            if (iVar2 < 0) goto LAB_0001ca08;
            lVar3 = FUN_0001f718(lVar3,0,0x80,2);
            if (lVar3 != 0) {
              FUN_00025984(param_1 + 0x1470,param_1,lVar3);
              lVar3 = FUN_0001c328(param_1,*(char *)(*(longlong *)
                                                      (*(longlong *)(param_1 + 0x1428) + 0x20) + 2))
              ;
              if (lVar3 == 0) {
                pcVar6 = "FindInterface Midi out failed.";
                goto LAB_0001c8c0;
              }
              lVar3 = FUN_0001f718(lVar3,0,0,2);
              if (lVar3 != 0) {
                uVar5 = FUN_00025d38(param_1 + 0x1710,param_1,lVar3);
                iVar2 = (int)uVar5;
                goto LAB_0001cab1;
              }
            }
            pcVar6 = "FindPipe Midi in failed.";
          }
        }
        else {
          pcVar6 = "Set AS for Midi failed.";
        }
      }
    }
LAB_0001c8c0:
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar6);
    iVar2 = -0x3fffffff;
  }
LAB_0001cab5:
  FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,"ConfigureForSampleRate exit failed."
              );
  return iVar2;
}

