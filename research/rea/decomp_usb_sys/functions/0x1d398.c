// rea decompile_all
// name: FUN_0001d398
// address: 0x1d398
// body: available
// range: 0x1d398-0x1d879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001d398(ulonglong *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte bVar11;
  int local_res10;
  
  FUN_0001d248((longlong)param_1);
  for (pbVar5 = FUN_0001bed0(*param_1,(byte *)0x0,0xffffffff,0xffffffff,1,2); pbVar5 != (byte *)0x0;
      pbVar5 = FUN_0001bed0(*param_1,pbVar5 + *pbVar5,0xffffffff,0xffffffff,1,2)) {
    if (pbVar5[3] != 0) {
      puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0x80,0x5f6e6577);
      if (puVar7 == (ulonglong *)0x0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar7,0,0x80);
        uVar10 = *param_1;
        puVar7[1] = (ulonglong)puVar7;
        *puVar7 = (ulonglong)puVar7;
        puVar1 = puVar7 + 9;
        puVar7[10] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar7[0xb] = 0x10;
        puVar1 = puVar7 + 0xc;
        puVar7[0xe] = 0;
        puVar7[0xd] = (ulonglong)puVar1;
        *puVar1 = (ulonglong)puVar1;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        *(undefined1 *)(puVar7 + 8) = 0;
        puVar7[0xf] = uVar10;
      }
      if (puVar7 == (ulonglong *)0x0) goto LAB_0001d5cf;
      uVar10 = puVar7[0xf];
      puVar7[4] = (ulonglong)pbVar5;
      pbVar8 = pbVar5;
      if (pbVar5 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2)) {
        do {
          if ((pbVar8[1] == 0x24) && (pbVar8[2] == 1)) goto LAB_0001d4ab;
          pbVar8 = pbVar8 + *pbVar8;
        } while (pbVar8 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2));
      }
      pbVar8 = (byte *)0x0;
LAB_0001d4ab:
      puVar7[5] = (ulonglong)pbVar8;
      if (pbVar8 == (byte *)0x0) {
LAB_0001d568:
        local_res10 = -0x1fffffff;
      }
      else {
        pbVar8 = pbVar5;
        if (pbVar5 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2)) {
          do {
            if (pbVar8[1] == 5) goto LAB_0001d4ea;
            pbVar8 = pbVar8 + *pbVar8;
          } while (pbVar8 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2));
        }
        pbVar8 = (byte *)0x0;
LAB_0001d4ea:
        puVar7[6] = (ulonglong)pbVar8;
        if (pbVar8 == (byte *)0x0) goto LAB_0001d568;
        pbVar9 = pbVar5;
        if (pbVar5 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2)) {
          do {
            if ((pbVar9[1] == 0x24) && (pbVar9[2] == 0xf0)) goto LAB_0001d528;
            pbVar9 = pbVar9 + *pbVar9;
          } while (pbVar9 < (byte *)(*(longlong *)(uVar10 + 0x1b78) + -2));
        }
        pbVar9 = (byte *)0x0;
LAB_0001d528:
        puVar7[7] = (ulonglong)pbVar9;
        if (pbVar9 == (byte *)0x0) goto LAB_0001d568;
        *(byte *)(puVar7 + 8) = pbVar8[2];
        local_res10 = FUN_0001ce30((longlong)puVar7);
        if (-1 < local_res10) {
          plVar4 = (longlong *)param_1[6];
          plVar2 = (longlong *)((longlong)puVar7 + param_1[7]);
          *plVar2 = *plVar4;
          plVar2[1] = (longlong)plVar4;
          *(longlong **)(*plVar4 + 8) = plVar2;
          *plVar4 = (longlong)plVar2;
          goto LAB_0001d580;
        }
      }
      FUN_0001d14c((longlong)puVar7);
      ExFreePoolWithTag(puVar7,0);
    }
LAB_0001d580:
  }
  pbVar5 = FUN_0001bf88(*param_1,0,0xb);
  param_1[0xb] = (ulonglong)pbVar5;
  if (pbVar5 == (byte *)0x0) {
    local_res10 = -0x3ffffff3;
    goto LAB_0001d857;
  }
  uVar6 = FUN_0001d9e8((longlong *)param_1);
  if ((char)uVar6 == '\0') {
    local_res10 = -0x1fffffff;
    goto LAB_0001d857;
  }
  uVar10 = 0;
  if (*(char *)(param_1[0xb] + 4) != '\0') {
    do {
      puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0x50,0x5f6e6577);
      if (puVar7 == (ulonglong *)0x0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar7,0,0x50);
        puVar7[1] = (ulonglong)puVar7;
        *puVar7 = (ulonglong)puVar7;
        FUN_000264d0(puVar7 + 2,0,0x28);
        *(undefined1 *)(puVar7 + 7) = 0;
        *(undefined1 *)(puVar7 + 9) = 0;
      }
      if (puVar7 == (ulonglong *)0x0) goto LAB_0001d5cf;
      bVar11 = (char)uVar10 + 1;
      bVar3 = *(byte *)(uVar10 + 5 + param_1[0xb]);
      *(byte *)(puVar7 + 9) = bVar11;
      *(byte *)(puVar7 + 7) = bVar3;
      pbVar5 = FUN_0001bf4c(*param_1,0,(uint)bVar3);
      puVar7[8] = (ulonglong)pbVar5;
      sprintf((char *)(puVar7 + 2),"Clock Source %d");
      if (*(char *)(puVar7[8] + 7) != '\0') {
        FUN_0001bb78(*param_1,*(char *)(puVar7[8] + 7),puVar7 + 2);
      }
      plVar4 = (longlong *)param_1[9];
      uVar10 = (ulonglong)bVar11;
      plVar2 = (longlong *)((longlong)puVar7 + param_1[10]);
      *plVar2 = *plVar4;
      plVar2[1] = (longlong)plVar4;
      *(longlong **)(*plVar4 + 8) = plVar2;
      *plVar4 = (longlong)plVar2;
    } while (bVar11 < *(byte *)(param_1[0xb] + 4));
  }
  pbVar5 = FUN_0001bed0(*param_1,(byte *)0x0,0xffffffff,0xffffffff,1,3);
  if (pbVar5 == (byte *)0x0) {
LAB_0001d853:
    if (-1 < local_res10) {
      return local_res10;
    }
  }
  else {
    plVar2 = (longlong *)param_1[3];
    if (plVar2 != (longlong *)0x0) {
      while (plVar4 = (longlong *)*plVar2, plVar4 != plVar2) {
        *(longlong *)plVar4[1] = *plVar4;
        *(longlong *)(*plVar4 + 8) = plVar4[1];
        plVar4[1] = (longlong)plVar4;
        *plVar4 = (longlong)plVar4;
        if (plVar4 == (longlong *)plVar2[2]) break;
        ExFreePoolWithTag();
      }
      ExFreePoolWithTag(plVar2,0);
    }
    puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0x38,0x5f6e6577);
    if (puVar7 == (ulonglong *)0x0) {
      puVar7 = (ulonglong *)0x0;
    }
    else {
      FUN_000264d0(puVar7,0,0x38);
      puVar7[2] = 0;
      puVar7[1] = (ulonglong)puVar7;
      *puVar7 = (ulonglong)puVar7;
    }
    param_1[3] = (ulonglong)puVar7;
    if (puVar7 != (ulonglong *)0x0) {
      FUN_0001cbd8((longlong)puVar7,*param_1,pbVar5,'\x01');
      plVar2 = (longlong *)param_1[4];
      if (plVar2 != (longlong *)0x0) {
        while (plVar4 = (longlong *)*plVar2, plVar4 != plVar2) {
          *(longlong *)plVar4[1] = *plVar4;
          *(longlong *)(*plVar4 + 8) = plVar4[1];
          plVar4[1] = (longlong)plVar4;
          *plVar4 = (longlong)plVar4;
          if (plVar4 == (longlong *)plVar2[2]) break;
          ExFreePoolWithTag();
        }
        ExFreePoolWithTag(plVar2,0);
      }
      puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,0x38,0x5f6e6577);
      if (puVar7 == (ulonglong *)0x0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        FUN_000264d0(puVar7,0,0x38);
        puVar7[2] = 0;
        puVar7[1] = (ulonglong)puVar7;
        *puVar7 = (ulonglong)puVar7;
      }
      param_1[4] = (ulonglong)puVar7;
      if (puVar7 != (ulonglong *)0x0) {
        FUN_0001cbd8((longlong)puVar7,*param_1,pbVar5,'\0');
        goto LAB_0001d853;
      }
    }
LAB_0001d5cf:
    local_res10 = -0x1ffffffe;
  }
LAB_0001d857:
  FUN_0001d248((longlong)param_1);
  return local_res10;
}

