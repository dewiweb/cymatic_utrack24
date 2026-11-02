// rea decompile_all
// name: FUN_00019638
// address: 0x19638
// body: available
// range: 0x19638-0x19845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00019638(longlong param_1)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  int iVar4;
  short *psVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_128;
  puVar10 = (ulonglong *)(param_1 + 0x1a3c);
  FUN_000264d0(puVar10,0,0x78);
  FUN_000264d0(&local_108,0,0xf0);
  iVar4 = FUN_000125b4(param_1,0,&local_108,0xf0);
  if (-1 < iVar4) {
    psVar5 = (short *)&local_108;
    while ((short)local_108 != 0) {
      psVar5 = psVar5 + 1;
      if ((short)local_108 == 0x5c) {
        if (*psVar5 != 0) {
          uVar11 = 0;
          puVar6 = puVar10;
          goto LAB_000196d1;
        }
        break;
      }
      local_108._0_2_ = *psVar5;
    }
  }
  goto LAB_000196f0;
  while( true ) {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
    uVar11 = uVar11 + 1;
    *(char *)puVar6 = (char)sVar2;
    puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    if (*psVar5 == 0) break;
LAB_000196d1:
    if (0x76 < uVar11) break;
  }
  *(undefined1 *)puVar6 = 0;
LAB_000196f0:
  if (*(char *)puVar10 != '\0') goto LAB_00019709;
  FUN_000117c0((char *)puVar10,"bridgeCo_AG__Switzerland&Unknown",0x78);
  for (; (char)*puVar10 != '\0'; puVar10 = (ulonglong *)((longlong)puVar10 + 1)) {
LAB_00019709:
    cVar1 = (char)*puVar10;
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')) {
      *(undefined1 *)puVar10 = 0x5f;
    }
  }
  puVar10 = (ulonglong *)(param_1 + 0x1ab4);
  FUN_000264d0(puVar10,0,0x28);
  iVar4 = FUN_000125b4(param_1,3,puVar10,0x28);
  if (iVar4 < 0) {
    pcVar8 = "0000000000";
    uVar11 = 0;
    puVar6 = puVar10;
    do {
      if (0x12 < uVar11) break;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      uVar11 = uVar11 + 1;
      *(short *)puVar6 = (short)cVar1;
      puVar6 = (ulonglong *)((longlong)puVar6 + 2);
    } while (*pcVar8 != '\0');
    *(undefined2 *)puVar6 = 0;
  }
  puVar6 = (ulonglong *)(param_1 + 0x1adc);
  FUN_000264d0(puVar6,0,0x28);
  uVar7 = 0xffffffffffffffff;
  puVar9 = puVar10;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    uVar3 = *puVar9;
    puVar9 = (ulonglong *)((longlong)puVar9 + 2);
  } while ((short)uVar3 != 0);
  uVar7 = ~uVar7 - 1;
  uVar11 = (uint)uVar7;
  puVar9 = puVar6;
  while (0 < (int)uVar11) {
    uVar3 = *puVar10;
    uVar11 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar11;
    puVar10 = (ulonglong *)((longlong)puVar10 + 2);
    *(char *)puVar9 = (char)uVar3;
    puVar9 = (ulonglong *)((longlong)puVar9 + 1);
  }
  *(undefined8 *)(param_1 + 0x1b08) = 0;
  do {
    cVar1 = (char)*puVar6;
    if (cVar1 == '\0') {
      FUN_00026110(local_18 ^ (ulonglong)auStack_128);
      return;
    }
    puVar6 = (ulonglong *)((longlong)puVar6 + 1);
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar4 = cVar1 + -0x30;
LAB_000197fc:
      *(longlong *)(param_1 + 0x1b08) = *(longlong *)(param_1 + 0x1b08) + (longlong)iVar4;
    }
    else {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        iVar4 = cVar1 + -0x57;
        goto LAB_000197fc;
      }
      if ((byte)(cVar1 + 0xbfU) < 6) {
        iVar4 = cVar1 + -0x37;
        goto LAB_000197fc;
      }
    }
    *(longlong *)(param_1 + 0x1b08) = *(longlong *)(param_1 + 0x1b08) << 4;
  } while( true );
}

