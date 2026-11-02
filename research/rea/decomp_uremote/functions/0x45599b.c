// rea decompile_all
// name: FUN_0045599b
// address: 0x45599b
// body: available
// range: 0x45599b-0x456198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045599b(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int aiStack_34 [5];
  undefined1 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4559a7;
  aiStack_34[0] = 0x4559b3;
  local_14 = in_ECX;
  FUN_00474839();
  local_18 = in_ECX + 0x14;
  aiStack_34[0] = 0x4559be;
  FUN_004c11fc();
  aiStack_34[0] = 0x4559cc;
  cVar1 = FUN_00448866();
  *(char *)(in_ECX + 0x568) = cVar1;
  *(undefined1 *)(in_ECX + 0x569) =
       *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x56c) + 0x7c) + 0x300);
  if (cVar1 == '\0') {
    aiStack_34[0] = 0x70;
    local_1c = FUN_005af82d();
    local_8 = 0;
    if (local_1c == 0) {
      local_1c = 0;
    }
    else {
      local_20 = (undefined1 *)aiStack_34;
      FUN_0046537e(aiStack_34);
      local_1c = FUN_004562ac(local_1c);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x14c;
    aiStack_34[0] = FUN_005af82d();
    local_8 = 1;
    local_20 = (undefined1 *)aiStack_34[0];
    if (aiStack_34[0] != 0) {
      FUN_0045260e();
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455a61;
    FUN_0045633b();
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 2;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_0045272e(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455a95;
    FUN_0045633b();
    aiStack_34[0] = 0x455a9f;
    FUN_0045633b();
    in_ECX = local_14;
  }
  if (*(char *)(in_ECX + 0x568) == '\0') {
    aiStack_34[0] = 0x70;
    local_1c = FUN_005af82d();
    local_8 = 3;
    if (local_1c == 0) {
      local_1c = 0;
    }
    else {
      local_20 = (undefined1 *)aiStack_34;
      FUN_0046537e(aiStack_34);
      local_1c = FUN_004562ac(local_1c);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 4;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(in_ECX + 0x56c) + 0x7c);
      FUN_00452848(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455b24;
    FUN_0045633b();
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    iVar2 = local_14;
    local_8 = 5;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_0045298b(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455b5b;
    FUN_0045633b();
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 6;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(iVar2 + 0x56c) + 0x7c);
      FUN_00452a7c(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455b8c;
    FUN_0045633b();
    aiStack_34[0] = 0x104;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 7;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(iVar2 + 0x56c) + 0x7c);
      FUN_00452c3a();
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455bc5;
    FUN_0045633b();
    aiStack_34[0] = 0x455bcf;
    FUN_0045633b();
    iVar2 = local_14;
    in_ECX = local_14;
    if (*(char *)(local_14 + 0x568) == '\0') {
      aiStack_34[0] = 0x70;
      local_1c = FUN_005af82d();
      local_8 = 8;
      if (local_1c == 0) {
        local_1c = 0;
      }
      else {
        local_20 = (undefined1 *)aiStack_34;
        FUN_0046537e(aiStack_34);
        local_1c = FUN_004562ac(local_1c);
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x104;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 9;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = *(int *)(*(int *)(iVar2 + 0x56c) + 0x7c);
        FUN_00452cd7();
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455c54;
      FUN_0045633b();
      aiStack_34[0] = 0x198;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 10;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
        FUN_00453c90();
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455c91;
      FUN_0045633b();
      aiStack_34[0] = 0x198;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 0xb;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
        FUN_00453d6d();
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455cc9;
      FUN_0045633b();
      aiStack_34[0] = 0x455cd3;
      FUN_0045633b();
      in_ECX = local_14;
    }
  }
  aiStack_34[0] = 0x70;
  local_1c = FUN_005af82d();
  local_8 = 0xc;
  if (local_1c == 0) {
    local_1c = 0;
  }
  else {
    local_20 = (undefined1 *)aiStack_34;
    FUN_0046537e(aiStack_34);
    local_1c = FUN_004562ac(local_1c);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x14c;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0xd;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(*(int *)(in_ECX + 0x56c) + 0x7c);
    FUN_00452d57(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x455d4a;
  FUN_0045633b();
  aiStack_34[0] = 0x150;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0xe;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = 0;
    FUN_00452ec7(local_20,*(undefined4 *)(*(int *)(local_14 + 0x56c) + 0x7c));
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x455d88;
  FUN_0045633b();
  if (*(char *)(local_14 + 0x568) == '\0') {
    aiStack_34[0] = 0x150;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 0xf;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = 1;
      FUN_00452ec7(local_20,*(undefined4 *)(*(int *)(local_14 + 0x56c) + 0x7c));
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455dc7;
    FUN_0045633b();
    aiStack_34[0] = 0x104;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 0x10;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_00453294(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455dff;
    FUN_0045633b();
  }
  aiStack_34[0] = 0x455e0a;
  FUN_0045633b();
  if ((*(char *)(local_14 + 0x568) == '\0') && (*(char *)(local_14 + 0x569) != '\0')) {
    aiStack_34[0] = 0x70;
    local_1c = FUN_005af82d();
    local_8 = 0x11;
    if (local_1c != 0) {
      local_20 = (undefined1 *)aiStack_34;
      FUN_0046537e(aiStack_34);
      FUN_004562ac(local_1c);
    }
    local_8 = 0xffffffff;
    iVar2 = 0;
    do {
      aiStack_34[0] = 0x150;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 0x12;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = iVar2;
        FUN_00453a64(local_20,*(undefined4 *)(*(int *)(local_14 + 0x56c) + 0x7c));
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455e95;
      FUN_0045633b();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    aiStack_34[0] = 0x455ea5;
    FUN_0045633b();
    aiStack_34[0] = 0x70;
    local_1c = FUN_005af82d();
    local_8 = 0x13;
    if (local_1c != 0) {
      local_20 = (undefined1 *)aiStack_34;
      FUN_0046537e(aiStack_34);
      FUN_004562ac(local_1c);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 0x14;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_00453351(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455f14;
    FUN_0045633b();
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 0x15;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_00453442(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455f45;
    FUN_0045633b();
    aiStack_34[0] = 0x14c;
    local_20 = (undefined1 *)FUN_005af82d();
    local_8 = 0x16;
    if (local_20 != (undefined1 *)0x0) {
      aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
      FUN_00453533(local_20);
    }
    local_8 = 0xffffffff;
    aiStack_34[0] = 0x455f76;
    FUN_0045633b();
    iVar2 = 0;
    do {
      aiStack_34[0] = 0x150;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 0x17;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = iVar2;
        FUN_00453624(local_20,*(undefined4 *)(*(int *)(local_14 + 0x56c) + 0x7c));
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455fae;
      FUN_0045633b();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar2 = 0;
    do {
      aiStack_34[0] = 0x150;
      local_20 = (undefined1 *)FUN_005af82d();
      local_8 = 0x18;
      if (local_20 != (undefined1 *)0x0) {
        aiStack_34[0] = iVar2;
        FUN_0045386d(local_20,*(undefined4 *)(*(int *)(local_14 + 0x56c) + 0x7c));
      }
      local_8 = 0xffffffff;
      aiStack_34[0] = 0x455fec;
      FUN_0045633b();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    aiStack_34[0] = 0x455ffc;
    FUN_0045633b();
  }
  aiStack_34[0] = 0x70;
  local_1c = FUN_005af82d();
  local_8 = 0x19;
  if (local_1c != 0) {
    local_20 = (undefined1 *)aiStack_34;
    FUN_0046537e(aiStack_34);
    FUN_004562ac(local_1c);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0xe10;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0x1a;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
    FUN_00453e35(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x45606f;
  FUN_0045633b();
  aiStack_34[0] = 0x230;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0x1b;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(local_14 + 0x56c);
    FUN_0045232e(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x4560a1;
  FUN_0045633b();
  aiStack_34[0] = 0x4560ab;
  FUN_0045633b();
  aiStack_34[0] = 0x70;
  local_1c = FUN_005af82d();
  local_8 = 0x1c;
  if (local_1c != 0) {
    local_20 = (undefined1 *)aiStack_34;
    FUN_0046537e(aiStack_34);
    FUN_004562ac(local_1c);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x1d4;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0x1d;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
    FUN_00451cdc(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x456119;
  FUN_0045633b();
  aiStack_34[0] = 0x150;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0x1e;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
    FUN_00452021(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x45614a;
  FUN_0045633b();
  aiStack_34[0] = 0x150;
  local_20 = (undefined1 *)FUN_005af82d();
  local_8 = 0x1f;
  if (local_20 != (undefined1 *)0x0) {
    aiStack_34[0] = *(int *)(*(int *)(local_14 + 0x56c) + 0x7c);
    FUN_00452170(local_20);
  }
  local_8 = 0xffffffff;
  aiStack_34[0] = 0x45617b;
  FUN_0045633b();
  aiStack_34[0] = 0x456185;
  FUN_0045633b();
  aiStack_34[0] = 0x456193;
  (**(code **)(*(int *)(local_14 + -0xa4) + 0x84))();
  return;
}

